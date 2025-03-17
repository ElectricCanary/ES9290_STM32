/*
 * ES9290.h
 *
 *  Created on: Jan 17, 2025
 *      Author: Antoine Ricoux for Electric Canary
 */

#ifndef INC_ES9290_H_
#define INC_ES9290_H_

#include "main.h"
#include "ES9290_reg.h"

#define ES9290_ADDR 0x30

#define ES9290_I2C_HANDLE hi2c1
#define ES9290_RESET_PORT CODEC_EN_GPIO_Port
#define ES9290_RESET_PIN CODEC_EN_Pin

//Configuration is for init function, parameters can be changed dynamically via the other functions

//Choose to generate master clock from Bit Clock via PLL or from external clock
//#define INT_CLK
#define EXT_CLK_24M_22M
//#define EXT_CLK_49M_45M

//Choose a Sampling Frequency
//#define FS_44K
#define FS_48K
//#define FS_88K
//#define FS_96K
//#define FS_176K
//#define FS_192K
//#define FS_352K
//#define FS_384K

//Choose a number of bit per frame
#define FRAME_32
//#define FRAME_16

//Switch for Left Justified data
#define TDM_LJ 0
//#define TDM_LJ TDM_LJ_bm

//Choose a bit depth
#define BIT_DEPTH_32
//#define BIT_DEPTH_24
//#define BIT_DEPTH_16

//Choose a GPIO1 Config
//#define GPIO1_CONFIG GPIO1_OFF
#define GPIO1_CONFIG GPIO1_MUTE_DAC_bm
//#define GPIO1_CONFIG GPIO1_CLOCK_VALID_FLAG_bm
//#define GPIO1_CONFIG GPIO1_PLL_LOCKED_FLAG_bm
//#define GPIO1_CONFIG GPIO1_DAC_MIN_VOL_FLAG_bm
//#define GPIO1_CONFIG GPIO1_DAC_AUTOMUTE_STATUS_bm
//#define GPIO1_CONFIG GPIO1_DAC_SOFT_RAMP_DONE_FLAG_bm
//#define GPIO1_CONFIG GPIO1_ADC_CH1_PEAK_FLAG_bm
//#define GPIO1_CONFIG GPIO1_ADC_CH2_PEAK_FLAG_bm
//#define GPIO1_CONFIG GPIO1_PWM_SIGNAL_bm
//#define GPIO1_CONFIG GPIO1_OR_OF_STATUS_BITS_bm
//#define GPIO1_CONFIG GPIO1_BCK_WS_MONITOR_bm
//#define GPIO1_CONFIG GPIO1_MCLK_24M_bm
//#define GPIO1_CONFIG GPIO1_MCLK_128FS_bm
//#define GPIO1_CONFIG GPIO1_OUTPUT0_bm
//#define GPIO1_CONFIG GPIO1_OUTPUT1_bm

//Choose a GPIO2 Config
//#define GPIO2_CONFIG GPIO2_OFF_bm
//#define GPIO2_CONFIG GPIO2_MUTE_DAC_bm
//#define GPIO2_CONFIG GPIO2_CLOCK_VALID_FLAG_bm
//#define GPIO2_CONFIG GPIO2_PLL_LOCKED_FLAG_bm
//#define GPIO2_CONFIG GPIO2_DAC_MIN_VOL_FLAG_bm
//#define GPIO2_CONFIG GPIO2_DAC_AUTOMUTE_STATUS_bm
//#define GPIO2_CONFIG GPIO2_DAC_SOFT_RAMP_DONE_FLAG_bm
#define GPIO2_CONFIG GPIO2_ADC_CH1_PEAK_FLAG_bm
//#define GPIO2_CONFIG GPIO2_ADC_CH2_PEAK_FLAG_bm
//#define GPIO2_CONFIG GPIO2_PWM_SIGNAL_bm
//#define GPIO2_CONFIG GPIO2_OR_OF_STATUS_BITS_bm
//#define GPIO2_CONFIG GPIO2_BCK_WS_MONITOR_bm
//#define GPIO2_CONFIG GPIO2_MCLK_24M_bm
//#define GPIO2_CONFIG GPIO2_MCLK_128FS_bm
//#define GPIO2_CONFIG GPIO2_OUTPUT0_bm
//#define GPIO2_CONFIG GPIO2_OUTPUT1_bm

//Choose a GPIO3 Config
#define GPIO3_CONFIG GPIO3_OFF_bm
//#define GPIO3_CONFIG GPIO3_MUTE_DAC_bm
//#define GPIO3_CONFIG GPIO3_CLOCK_VALID_FLAG_bm
//#define GPIO3_CONFIG GPIO3_PLL_LOCKED_FLAG_bm
//#define GPIO3_CONFIG GPIO3_DAC_MIN_VOL_FLAG_bm
//#define GPIO3_CONFIG GPIO3_DAC_AUTOMUTE_STATUS_bm
//#define GPIO3_CONFIG GPIO3_DAC_SOFT_RAMP_DONE_FLAG_bm
//#define GPIO3_CONFIG GPIO3_ADC_CH1_PEAK_FLAG_bm
//#define GPIO3_CONFIG GPIO3_ADC_CH2_PEAK_FLAG_bm
//#define GPIO3_CONFIG GPIO3_PWM_SIGNAL_bm
//#define GPIO3_CONFIG GPIO3_OR_OF_STATUS_BITS_bm
//#define GPIO3_CONFIG GPIO3_BCK_WS_MONITOR_bm
//#define GPIO3_CONFIG GPIO3_MCLK_24M_bm
//#define GPIO3_CONFIG GPIO3_MCLK_128FS_bm
//#define GPIO3_CONFIG GPIO3_OUTPUT0_bm
//#define GPIO3_CONFIG GPIO3_OUTPUT1_bm

//Choose a GPIO4 Config
#define GPIO4_CONFIG GPIO4_OFF_bm
//#define GPIO4_CONFIG GPIO4_MUTE_DAC_bm
//#define GPIO4_CONFIG GPIO4_CLOCK_VALID_FLAG_bm
//#define GPIO4_CONFIG GPIO4_PLL_LOCKED_FLAG_bm
//#define GPIO4_CONFIG GPIO4_DAC_MIN_VOL_FLAG_bm
//#define GPIO4_CONFIG GPIO4_DAC_AUTOMUTE_STATUS_bm
//#define GPIO4_CONFIG GPIO4_DAC_SOFT_RAMP_DONE_FLAG_bm
//#define GPIO4_CONFIG GPIO4_ADC_CH1_PEAK_FLAG_bm
//#define GPIO4_CONFIG GPIO4_ADC_CH2_PEAK_FLAG_bm
//#define GPIO4_CONFIG GPIO4_PWM_SIGNAL_bm
//#define GPIO4_CONFIG GPIO4_OR_OF_STATUS_BITS_bm
//#define GPIO4_CONFIG GPIO4_BCK_WS_MONITOR_bm
//#define GPIO4_CONFIG GPIO4_MCLK_24M_bm
//#define GPIO4_CONFIG GPIO4_MCLK_128FS_bm
//#define GPIO4_CONFIG GPIO4_OUTPUT0_bm
//#define GPIO4_CONFIG GPIO4_OUTPUT1_bm

//Switches to invert GPIO
#define GPIO1_INVERT 0
//#define GPIO1_INVERT INVERT_GPIO1_bm
#define GPIO2_INVERT 0
//#define GPIO2_INVERT INVERT_GPIO2_bm
#define GPIO3_INVERT 0
//#define GPIO3_INVERT INVERT_GPIO3_bm
#define GPIO4_INVERT 0
//#define GPIO4_INVERT INVERT_GPIO4_bm

//Choose a CH1 ADC analog gain
#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_0DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_6DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_12DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_18DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_24DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_30DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_36DB_bm
//#define ADC_ANALOG_GAIN_CH1 ADC_ANALOG_GAIN_CH1_42DB_bm

//Choose a CH2 ADC analog gain
#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_0DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_6DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_12DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_18DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_24DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_30DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_36DB_bm
//#define ADC_ANALOG_GAIN_CH2 ADC_ANALOG_GAIN_CH2_42DB_bm

//Choose a CH1 ADC digital gain
#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_0DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_6DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_12DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_18DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_24DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_30DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_36DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH1_42DB_bm

//Choose a CH2 ADC digital gain
#define ADC_DIGITAL_GAIN_CH2 ADC_DIGITAL_GAIN_CH2_0DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_6DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_12DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_18DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_24DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_30DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_36DB_bm
//#define ADC_DIGITAL_GAIN_CH1 ADC_DIGITAL_GAIN_CH2_42DB_bm

//Choose a CH1 DAC digital gain
#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_0DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_6DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_12DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_18DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_24DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_30DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_36DB_bm
//#define DAC_DIGITAL_GAIN_CH1 DAC_DIGITAL_GAIN_CH1_42DB_bm

//Choose a CH2 DAC digital gain
#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_0DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_6DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_12DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_18DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_24DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_30DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_36DB_bm
//#define DAC_DIGITAL_GAIN_CH2 DAC_DIGITAL_GAIN_CH2_42DB_bm

//Peak detect config enable if needed and enter thresholds
//#define PEAK_DETECT_CH1_EN
//#define PEAK_DETECT_CH2_EN
//Between 0 and 22, 0 being instant and 22 the slowest. Default is 10
//#define PEAK_DECAY_RATE 10
//In dB between 0 and -48
//#define PEAK_THRESHOLD_CH1 0
//#define PEAK_THRESHOLD_CH2 0

//Mic Bias enable if needed and choose a voltage
//#define MIC_BIAS_EN
//#define MIC_BIAS_2V85
//#define MIC_BIAS MB_VR_SET_2V75_bm
//#define MIC_BIAS MB_VR_SET_2V65_bm
//#define MIC_BIAS MB_VR_SET_2V55_bm
//#define MIC_BIAS MB_VR_SET_1V95_bm
//#define MIC_BIAS MB_VR_SET_1V85_bm
//#define MIC_BIAS MB_VR_SET_1V75_bm
//#define MIC_BIAS MB_VR_SET_1V65_bm
//#define MIC_BIAS MB_VR_SET_1V45_bm

//End of Config

#if defined(FS_44K) || defined(FS_88K) || defined(FS_176K) || defined(FS_352K)
#define FAMILY_44
#else
#define FAMILY_48
#endif

#if (defined(FS_44K) || defined(FS_48K)) && defined(FRAME_16)
#define FBDIV3 0x08;
#elif ((defined(FS_44K) || defined(FS_48K)) && defined(FRAME_32)) || ((defined(FS_88K) || defined(FS_96K)) && defined(FRAME_16))
#define FBDIV3 0x10;
#elif ((defined(FS_88K) || defined(FS_96K)) && defined(FRAME_32)) || ((defined(FS_176K) || defined(FS_192K)) && defined(FRAME_16))
#define FBDIV3 0x20;
#else
#define FBDIV3 0x40;
#endif

#if GPIO1_CONFIG == GPIO1_MUTE_DAC
#define GPIO1_DIR GPIO1_SDB_bm
#elif GPIO1_CONFIG == GPIO1_OFF
#define GPIO1_DIR 0
#else
#define GPIO1_DIR GPIO1_OE_bm
#endif
#if GPIO2_CONFIG == GPIO2_MUTE_DAC
#define GPIO2_DIR GPIO2_SDB_bm
#elif GPIO2_CONFIG == GPIO2_OFF
#define GPIO2_DIR 0
#else
#define GPIO2_DIR GPIO2_OE_bm
#endif
#if GPIO3_CONFIG == GPIO3_MUTE_DAC
#define GPIO3_DIR GPIO3_SDB_bm
#elif GPIO3_CONFIG == GPIO3_OFF
#define GPIO3_DIR 0
#else
#define GPIO3_DIR GPIO3_OE_bm
#endif
#if GPIO4_CONFIG == GPIO4_MUTE_DAC
#define GPIO4_DIR GPIO4_SDB_bm
#elif GPIO4_CONFIG == GPIO4_OFF
#define GPIO4_DIR 0
#else
#define GPIO4_DIR GPIO4_OE_bm
#endif

void ES9290_init(void);
uint8_t ES9290_readChipID(void);
uint8_t ES9290_readGPIO(void);
HAL_StatusTypeDef ES9290_RegWrite(uint8_t reg, uint8_t data);
HAL_StatusTypeDef ES9290_RegRead(uint8_t reg, uint8_t *data);
void ES9290_HardReset(void);
HAL_StatusTypeDef ES9290_SoftReset(void);
HAL_StatusTypeDef ES9290_DACMute(uint8_t channel);
HAL_StatusTypeDef ES9290_SetDACVolume(uint8_t channel, float db);
HAL_StatusTypeDef ES9290_SetDACXMix(uint8_t channel, float db);
HAL_StatusTypeDef ES9290_SetMonitorVolume(uint8_t channel, float db);
HAL_StatusTypeDef ES9290_SetADCVolume(uint8_t channel, float db);
HAL_StatusTypeDef ES9290_SetADCXMix(uint8_t channel, float db);
HAL_StatusTypeDef ES9290_SetPWMCount(uint8_t count);
HAL_StatusTypeDef ES9290_SetPWMFreq(uint16_t freq);
HAL_StatusTypeDef ES9290_SetADCDBQ80Hz(uint8_t enable);
HAL_StatusTypeDef ES9290_SetADCDBQ120Hz(uint8_t enable);
HAL_StatusTypeDef ES9290_SetADCDBQCustom(int A1, int A2, int B0, int B1, int B2, uint8_t enable);
HAL_StatusTypeDef ES9290_SetDACDBQCustom(int A1, int A2, int B0, int B1, int B2, uint8_t enable);

#endif /* INC_ES9290_H_ */
