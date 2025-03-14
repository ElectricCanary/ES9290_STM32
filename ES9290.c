/*
 * ES9290.c
 *
 *  Created on: Jan 21, 2025
 *      Author: Antoine Ricoux for Electric Canary
 */

/*
 * TODO:
 * Add Peak Read function
 * Add TDM support
 * Add Master support
 * Add Daisy Chain support
 * Add Filter functions
 * Add PDM Input support
 * Add Volume Ramp support
 *
*/

#include "ES9290.h"
#include "ES9290_reg.h"
#include "main.h"

void ES9290_init(void)
{
	uint8_t data;

	ES9290_HardReset();

	//PLL internal clock generation
#ifdef INT_CLK
	ES9290_RegWrite(PLL_REGULATOR_reg, PLL_REGULATOR_reg_def | PLL_REG_PDB_bm | 4);
#if (defined(FS_352K) || defined(FS_384K)) && defined(FRAME_32);
	ES9290_RegWrite(PLL_IN_OUT_DIV1_reg, 0x01);
#endif
	ES9290_RegWrite(PLL_FEEDBACK_DIV3_reg, FBDIV3);
	ES9290_RegWrite(PLL_CLOCK_SELECT_reg, PLL_CLOCK_SELECT_reg_def | SEL_MCLK_IN_PLL_bm | EN_PLL_CLK_IN_bm);
	ES9290_RegWrite(PLL_VCO_CP_reg, PLL_VCO_CP_reg_def | PLL_VCO_PDB_bm | PLL_CP_PDB_bm | PLL_CLKSMP_PDB_bm | PLL_DIG_RSTB_bm);
	HAL_Delay(1);
#endif

	//Those are Reserved registers, recommended settings in doc
	ES9290_RegWrite(146, 0xE1);
	ES9290_RegWrite(147, 0x04);
	ES9290_RegWrite(148, 0x95);
	ES9290_RegWrite(149, 0);
	ES9290_RegWrite(84, 0xEC);
	ES9290_RegWrite(85, 0xFF);
	ES9290_RegWrite(86, 0xAC);
	ES9290_RegWrite(87, 0xFF);

	//Remove Automute
	ES9290_RegWrite(AUTOMUTE_ENABLE_reg, AUTOMUTE_ENABLE_reg_def & ~(AUTOMUTE_EN_CH2_bm) & ~(AUTOMUTE_EN_CH1_bm));

	//Also reserved register
	ES9290_RegWrite(151, 0x18);

	//Format parameters
#ifdef FRAME_16
	ES9290_RegWrite(TDM_CONFIG2_reg, TDM_CONFIG2_reg_def | TDM_WORD_WIDTH_16BIT_bm | TDM_BIT_DEPTH_16BIT_bm | TDM_LJ);
#else
#ifdef BIT_DEPTH_16
	ES9290_RegWrite(TDM_CONFIG2_reg, TDM_CONFIG2_reg_def | TDM_BIT_DEPTH_16BIT_bm | TDM_LJ);
#endif
#ifdef BIT_DEPTH_24
	ES9290_RegWrite(TDM_CONFIG2_reg, TDM_CONFIG2_reg_def | TDM_BIT_DEPTH_24BIT_bm | TDM_LJ);
#endif
#endif

	//Divide master clock by 2 if necessary
#ifdef EXT_CLK_49M_45M
	ES9290_RegWrite(BACKEND_CLOCK_CONTROL_reg, BACKEND_CLOCK_CONTROL_reg_def | MCLK_24M_DIV2_bm);
#endif

	//GPIO Config
#if GPIO1_CONFIG != GPIO1_OFF || GPIO2_CONFIG != GPIO2_OFF  || GPIO3_CONFIG != GPIO3_OFF || GPIO4_CONFIG != GPIO4_OFF
	ES9290_RegWrite(GPIO1_2_CONFIG_reg, GPIO1_2_CONFIG_reg_def | GPIO1_CONFIG | GPIO2_CONFIG);
	ES9290_RegWrite(GPIO3_4_CONFIG_reg, GPIO3_4_CONFIG_reg_def | GPIO3_CONFIG | GPIO4_CONFIG);
	ES9290_RegWrite(GPIO_CONTROLS2_reg, GPIO_CONTROLS2_reg_def | GPIO1_INVERT | GPIO2_INVERT | GPIO3_INVERT | GPIO4_INVERT);
	ES9290_RegWrite(GPIO_CONTROLS1_reg, GPIO_CONTROLS1_reg_def | GPIO1_DIR | GPIO2_DIR | GPIO3_DIR | GPIO4_DIR);
#endif

	//ADC Analog Gain
#if ADC_ANALOG_GAIN_CH1 != ADC_ANALOG_GAIN_CH1_0DB || ADC_ANALOG_GAIN_CH2 != ADC_ANALOG_GAIN_CH2_0DB
	ES9290_RegWrite(PGA_GAIN_CONTROL_reg, PGA_GAIN_CONTROL_reg_def | ADC_ANALOG_GAIN_CH1 | ADC_ANALOG_GAIN_CH2);
#endif

	//ADC Digital Gain
#if ADC_DIGITAL_GAIN_CH1 != ADC_DIGITAL_GAIN_CH1_0DB || ADC_DIGITAL_GAIN_CH2 != ADC_DIGITAL_GAIN_CH2_0DB
	ES9290_RegWrite(ADC_DIGITAL_GAIN_reg, ADC_DIGITAL_GAIN_reg_def | ADC_DIGITAL_GAIN_CH1 | ADC_DIGITAL_GAIN_CH2);
#endif

	//DAC Digital Gain
#if DAC_DIGITAL_GAIN_CH1 != DAC_DIGITAL_GAIN_CH1_0DB || DAC_DIGITAL_GAIN_CH2 != DAC_DIGITAL_GAIN_CH2_0DB
	ES9290_RegWrite(DAC_DIGITAL_GAIN_reg, DAC_DIGITAL_GAIN_reg_def | DAC_DIGITAL_GAIN_CH1 | DAC_DIGITAL_GAIN_CH2);
#endif

	//Peak Detection
#if defined(PEAK_DETECT_CH1_EN) || defined(PEAK_DETECT_CH2_EN)
	ES9290_RegWrite(PEAK_DETECT_CONFIG_reg, PEAK_DETECT_CONFIG_reg_def | PEAK_DECAY_RATE);
	ES9290_RegWrite(PEAK_THRESHOLD_CH1_reg, PEAK_THRESHOLD_CH1_reg_def | (uint8_t) round(0xFF * pow(10,PEAK_THRESHOLD_CH1 / 20)));
	ES9290_RegWrite(PEAK_THRESHOLD_CH2_reg, PEAK_THRESHOLD_CH2_reg_def | (uint8_t) round(0xFF * pow(10,PEAK_THRESHOLD_CH2 / 20)));
	ES9290_RegWrite(PEAK_DETECT_ENABLE_reg, PEAK_DETECT_ENABLE_reg_def | PEAK_DETECT_CH1_EN_bm | PEAK_DETECT_CH2_EN_bm);
#endif
	//MIC Bias
#ifdef MIC_BIAS_EN
	data = MB_PDB_bm;
#ifndef MIC_BIAS_2V85
	data |= MB_VR_BYPB_bm | MIC_BIAS;
#endif
	ES9290_RegWrite(MIC_BIAS_reg, data);
#endif

	//Enable DAC & ADC
	data = SYS_CONFIG_reg_def | ENABLE_DAC_bm | ENABLE_ADC_bm;
	ES9290_RegWrite(SYS_CONFIG_reg, data);
}

uint8_t ES9290_readChipID(void)
{
	uint8_t data;
	ES9290_RegRead(CHIP_ID_reg, &data);
	return (data);
}

void ES9290_HardReset(void)
{
	HAL_GPIO_WritePin(ES9290_RESET_PORT, ES9290_RESET_PIN, GPIO_PIN_RESET);
	HAL_Delay(25);
	HAL_GPIO_WritePin(ES9290_RESET_PORT, ES9290_RESET_PIN, GPIO_PIN_SET);
	HAL_Delay(25);
}

HAL_StatusTypeDef ES9290_SoftReset(void)
{
	return ES9290_RegWrite(SYS_CONFIG_reg, SOFT_RESET_bm);
}

uint8_t ES9290_readGPIO(void)
{
	uint8_t data;
	ES9290_RegWrite(GPIO_READ_reg, GPIO_READ_reg_def | GPIO1_READ_bm | GPIO2_READ_bm | GPIO3_READ_bm | GPIO4_READ_bm);
	ES9290_RegRead(GPIO_READBACK_reg, &data);
	ES9290_RegWrite(GPIO_READ_reg, GPIO_READ_reg_def);
	return (data & 0x0F);
}

//dB can be between 0 and -127dB 0.5dB steps
//db < -127 or -INFINITY will mute the channel
HAL_StatusTypeDef ES9290_SetADCVolume(uint8_t channel, float db)
{
	db = db > 1 ? 1 : db;
	db = db < -127 ? -INFINITY : db;
	uint8_t data = db == -INFINITY ? 0xFF : db / -0.5;
		switch (channel)
		{
			case 1:
				return ES9290_RegWrite(ADC_VOLUME_CH1_reg, data);
				break;
			case 2:
				return ES9290_RegWrite(ADC_VOLUME_CH2_reg, data);
				break;
			default:
				return HAL_ERROR;
				break;
		}
}

//ADC Cross mix of one channel to the other
//parameters (1, -10) will add ADC Ch2 -10dB to ADC Ch1
//db < -127 or -INFINITY will mute the crossing channel
HAL_StatusTypeDef ES9290_SetADCXMix(uint8_t channel, float db)
{
	db = db > 1 ? 1 : db;
	db = db < -127 ? -INFINITY : db;
	uint8_t data = db == -INFINITY ? 0xFF : db / -0.5;
		switch (channel)
		{
			case 1:
				return ES9290_RegWrite(ADC_MIX_VOLUME_CH1_reg, data);
				break;
			case 2:
				return ES9290_RegWrite(ADC_MIX_VOLUME_CH2_reg, data);
				break;
			default:
				return HAL_ERROR;
				break;
		}
}

//dB can be between 0 and +42dB, 6dB steps
HAL_StatusTypeDef ES9290_SetADCDigitalGain(uint8_t dBCh1, uint8_t dBCh2)
{
	return ES9290_RegWrite(ADC_DIGITAL_GAIN_reg, ADC_DIGITAL_GAIN_reg_def | (dBCh1 / 6) | ((dBCh2 / 6) << 4));
}

//Mute & Unmute DAC Channels
//1: Mute Ch1, Unmutes Ch2
//2: Unmutes Ch1, Mutes Ch2
//3: All muted
HAL_StatusTypeDef ES9290_DACMute(uint8_t channel)
{
	return ES9290_RegWrite(DAC_MUTE_reg, channel & 3);
}

//dB can be between +1 and -126dB, 0.5dB steps
//db < -127 or -INFINITY will mute the channel
HAL_StatusTypeDef ES9290_SetDACVolume(uint8_t channel, float db)
{
	db = db > 1 ? 1 : db;
	db = db < -127 ? -INFINITY : db;
	uint8_t data = db == -INFINITY ? 0xFF : db / -0.5;
	switch (channel)
	{
		case 1:
			return ES9290_RegWrite(DAC_VOLUME_CH1_reg, data);
			break;
		case 2:
			return ES9290_RegWrite(DAC_VOLUME_CH2_reg, data);
			break;
		default:
			return HAL_ERROR;
			break;
	}
}

//DAC Cross mix of one channel to the other
//parameters (1, -10) will add DAC Ch2 -10dB to DAC Ch1
//dB can be between 0 and -127dB, 0.5dB steps
//db < -127 or -INFINITY will mute the crossing channel
HAL_StatusTypeDef ES9290_SetDACXMix(uint8_t channel, float db)
{
	db = db > 1 ? 1 : db;
	db = db < -127 ? -INFINITY : db;
	uint8_t data = db == -INFINITY ? 0xFF : db / -0.5;

		switch (channel)
		{
			case 1:
				return ES9290_RegWrite(DAC_MIX_VOLUME_CH1_reg, data);
				break;
			case 2:
				return ES9290_RegWrite(DAC_MIX_VOLUME_CH2_reg, data);
				break;
			default:
				return HAL_ERROR;
				break;
		}
}

//Direct Monitor Volume
//parameters (1, -10) will add ADC Ch1 -10dB to DAC Ch1
//dB can be between 0 and -127dB, 0.5dB steps
//db = -INFINITY will set the volume to -infdB
HAL_StatusTypeDef ES9290_SetMonitorVolume(uint8_t channel, float db)
{
	uint8_t data = db == -INFINITY ? 0xFF : db / -0.5;
		switch (channel)
		{
			case 1:
				return ES9290_RegWrite(DIRECT_MONITOR_VOLUME_CH1_reg, data);
				break;
			case 2:
				return ES9290_RegWrite(DIRECT_MONITOR_VOLUME_CH2_reg, data);
				break;
			default:
				return HAL_ERROR;
				break;
		}
}

HAL_StatusTypeDef ES9290_RegWrite(uint8_t reg, uint8_t data)
{
	return HAL_I2C_Mem_Write(&ES9290_I2C_HANDLE, (uint16_t) ES9290_ADDR, reg, 1, &data, 1, 5);
}

HAL_StatusTypeDef ES9290_RegRead(uint8_t reg, uint8_t *data)
{
	return HAL_I2C_Mem_Read(&ES9290_I2C_HANDLE, (uint16_t) ES9290_ADDR, CHIP_ID_reg, 1, data, 1, 5);
}
