/*
 * ES9290_reg.h
 *
 *  Created on: Mar 14, 2025
 *      Author: Antoine Ricoux for Electric Canary
 */

#ifndef SRC_ES9290_REG_H_
#define SRC_ES9290_REG_H_

//_reg is register number
//_bp is bit position
//_bm is bit mask
//_reg_def default value of register

#define SYS_CONFIG_reg 0
#define SYS_CONFIG_reg_def 8
#define ENABLE_ADC_bp 0
#define ENABLE_ADC_bm (1 << ENABLE_ADC_bp)
#define ENABLE_DAC_bp 1
#define ENABLE_DAC_bm (1 << ENABLE_DAC_bp)
#define ENABLE_64FS_MODE_bp 2
#define ENABLE_64FS_MODE_bm (1 << ENABLE_64FS_MODE_bp)
#define AUTO_FS_DETECT_bp 3
#define AUTO_FS_DETECT_bm (1 << AUTO_FS_DETECT_bp)
#define AUTO_FS_DETECT_BLOCK_64FS_bp 4
#define AUTO_FS_DETECT_BLOCK_64FS_bm (1 << AUTO_FS_DETECT_BLOCK_64FS_bp)
#define FORCE_PLL_LOCK_bp 5
#define FORCE_PLL_LOCK_bm (1 << FORCE_PLL_LOCK_bp)
#define SOFT_RESET_bp 7
#define SOFT_RESET_bm (1 << SOFT_RESET_bp)

#define CODEC_CONFIG_reg 1
#define CODEC_CONFIG_reg_def 3
#define ENABLE_TDM_ENCODE_bp 0
#define ENABLE_TDM_ENCODE_bm (1 << ENABLE_TDM_ENCODE_bp)
#define ENABLE_TDM_DECODE_bp 1
#define ENABLE_TDM_DECODE_bm (1 << ENABLE_TDM_DECODE_bp)

#define FRONTEND_CLOCK_CONTROL_reg 2
#define FRONTEND_CLOCK_CONTROL_reg_def 3
#define MCLK_128FS_DIV_bp 0
#define MCLK_128FS_DIV_bm (63 << MCLK_128FS_DIV_bp)
#define MCLK_128FS_HALF_DIV_bp 6
#define MCLK_128FS_HALF_DIV_bm (1 << MCLK_128FS_HALF_DIV_bp)
#define EN_CLK_DET_bp 7
#define EN_CLK_DET_bm (1 << EN_CLK_DET_bp)

#define BACKEND_CLOCK_CONTROL_reg 3
#define BACKEND_CLOCK_CONTROL_reg_def 8
#define MCLK_24M_DIV2_bp 4
#define MCLK_24M_DIV2_bm (1 << MCLK_24M_DIV2_bp)
#define DAC_CLK_INV_bp 7
#define DAC_CLK_INV_bm (1 << DAC_CLK_INV_bp)

#define PCM_MASTER_CLK_CONFIG_reg 4
#define PCM_MASTER_CLK_CONFIG_reg_def 7
#define MASTER_BCK_DIV_bp 0
#define MASTER_BCK_DIV_bm (0xFF << MASTER_BCK_DIV_bp)

#define TDM_CONFIG1_reg 5
#define TDM_CONFIG1_reg_def 1
#define TDM_CH_NUM_bp 0
#define TDM_CH_NUM_bm (31 << TDM_CH_NUM_bp)
#define AUTO_CH_DETECT_bp 6
#define AUTO_CH_DETECT_bm (1 << AUTO_CH_DETECT_bp)
#define TDM_RESYNC_bp 7
#define TDM_RESYNC_bm (1 << TDM_RESYNC_bp)

#define TDM_CONFIG2_reg 6
#define TDM_CONFIG2_reg_def 192
#define TDM_LJ_bp 0
#define TDM_LJ_bm (1 << TDM_LJ_bp)
#define TDM_VALID_EDGE_bp 1
#define TDM_VALID_EDGE_bm (1 << TDM_VALID_EDGE_bp)
#define TDM_BIT_DEPTH_bp 2
#define TDM_BIT_DEPTH_bm (3 << TDM_BIT_DEPTH_bp)
#define TDM_BIT_DEPTH_16BIT_bm (2 << TDM_BIT_DEPTH_bp)
#define TDM_BIT_DEPTH_24BIT_bm (1 << TDM_BIT_DEPTH_bp)
#define TDM_BIT_DEPTH_32BIT_bm (0 << TDM_BIT_DEPTH_bp)
#define TDM_WORD_WIDTH_bp 4
#define TDM_WORD_WIDTH_bm (3 << TDM_WORD_WIDTH_bp)
#define TDM_WORD_WIDTH_16BIT_bm (2 << TDM_WORD_WIDTH_bp)
#define TDM_WORD_WIDTH_24BIT_bm (1 << TDM_WORD_WIDTH_bp)
#define TDM_WORD_WIDTH_32BIT_bm (0 << TDM_WORD_WIDTH_bp)
#define ENABLE_BCK_MONITOR_bp 6
#define ENABLE_BCK_MONITOR_bm (1 << ENABLE_BCK_MONITOR_bp)
#define ENABLE_WS_MONITOR_bp 7
#define ENABLE_WS_MONITOR_bm (1 << ENABLE_WS_MONITOR_bp)

#define ADC_TDM_CH1_SLOT_CONFIG_reg 7
#define ADC_TDM_CH1_SLOT_CONFIG_reg_def 0
#define ADC_TDM_SLOT_SEL_CH1_bp 0
#define ADC_TDM_SLOT_SEL_CH1_bm (31 << ADC_TDM_SLOT_SEL_CH1_bp)
#define ADC_16BIT_DITHER_SHAPE_bp 5
#define ADC_16BIT_DITHER_SHAPE_bm (1 << ADC_16BIT_DITHER_SHAPE_bp)

#define ADC_TDM_CH2_SLOT_CONFIG_reg 8
#define ADC_TDM_CH2_SLOT_CONFIG_reg_def 1
#define ADC_TDM_SLOT_SEL_CH2_bp 0
#define ADC_TDM_SLOT_SEL_CH2_bm (31 << ADC_TDM_SLOT_SEL_CH2_bp)

#define DAC_TDM_CH1_SLOT_CONFIG_reg 9
#define DAC_TDM_CH1_SLOT_CONFIG_reg_def 0
#define DAC_TDM_SLOT_SEL_CH1_bp 0
#define DAC_TDM_SLOT_SEL_CH1_bm (31 << DAC_TDM_SLOT_SEL_CH1_bp)

#define DAC_TDM_CH2_SLOT_CONFIG_reg 10
#define DAC_TDM_CH2_SLOT_CONFIG_reg_def 1
#define DAC_TDM_SLOT_SEL_CH2_bp 0
#define DAC_TDM_SLOT_SEL_CH2_bm (31 << DAC_TDM_SLOT_SEL_CH2_bp)

#define ADC_DAISY_CHAIN_reg 11
#define ADC_DAISY_CHAIN_reg_def 0
#define ADC_TDM_DATA_LATCH_ADJ_bp 0
#define ADC_TDM_DATA_LATCH_ADJ_bm (31 << ADC_TDM_DATA_LATCH_ADJ_bp)
#define ADC_TDM_DAISY_CHAIN_bp 5
#define ADC_TDM_DAISY_CHAIN_bm (1 << ADC_TDM_DAISY_CHAIN_bp)

#define DAC_DAISY_CHAIN_reg 12
#define DAC_DAISY_CHAIN_reg_def 0
#define DAC_TDM_DATA_LATCH_ADJ_bp 0
#define DAC_TDM_DATA_LATCH_ADJ_bm (31 << DAC_TDM_DATA_LATCH_ADJ_bp)
#define DAC_TDM_DAISY_CHAIN_bp 5
#define DAC_TDM_DAISY_CHAIN_bm (1 << DAC_TDM_DAISY_CHAIN_bp)

#define PCM_MASTER_MODE_CONFIG_reg 13
#define PCM_MASTER_MODE_CONFIG_reg_def 18
#define MASTER_MODE_EN_bp 0
#define MASTER_MODE_EN_bm (1 << MASTER_MODE_EN_bp)
#define MASTER_BCK_INVERT_bp 1
#define MASTER_BCK_INVERT_bm (1 << MASTER_BCK_INVERT_bp)
#define MASTER_WS_INVERT_bp 2
#define MASTER_WS_INVERT_bm (1 << MASTER_WS_INVERT_bp)
#define MASTER_WS_PULSE_MODE_bp 3
#define MASTER_WS_PULSE_MODE_bm (1 << MASTER_WS_PULSE_MODE_bp)
#define MASTER_WS_CLK_PHASE_bp 4
#define MASTER_WS_CLK_PHASE_bm (1 << MASTER_WS_CLK_PHASE_bp)
#define SLAVE_BCK_INVERT_bp 7
#define SLAVE_BCK_INVERT_bm (1 << SLAVE_BCK_INVERT_bp)

#define VOLUME_UP_RAMP_RATE_reg 14
#define VOLUME_UP_RAMP_RATE_reg_def 4

#define VOLUME_DOWN_RAMP_RATE_reg 15
#define VOLUME_DOWN_RAMP_RATE_reg_def 4

#define AUTO_SYNC_CONFIG_reg 17
#define AUTO_SYNC_CONFIG_reg_def 15
#define AUTO_FS_CLK_GEN_SYNC_bp 0
#define AUTO_FS_CLK_GEN_SYNC_bm (1 << AUTO_FS_CLK_GEN_SYNC_bp)
#define AUTO_ICG_SYNC_bp 1
#define AUTO_ICG_SYNC_bm (1 << AUTO_ICG_SYNC_bp)
#define AUTO_WS_PHASE_SYNC_bp 2
#define AUTO_WS_PHASE_SYNC_bm (1 << AUTO_WS_PHASE_SYNC_bp)
#define AUTO_MCLK_24M_PHASE_SYNC_bp 3
#define AUTO_MCLK_24M_PHASE_SYNC_bm (1 << AUTO_MCLK_24M_PHASE_SYNC_bp)

#define STATUS_BITS_MASK_reg 18
#define STATUS_BITS_MASK_reg_def 0
#define STATUS_MASK_CH1_PEAK_LATCH_bp 0
#define STATUS_MASK_CH1_PEAK_LATCH_bm (1 << STATUS_MASK_CH1_PEAK_LATCH_bp)
#define STATUS_MASK_CH2_PEAK_LATCH_bp 1
#define STATUS_MASK_CH2_PEAK_LATCH_bm (1 << STATUS_MASK_CH2_PEAK_LATCH_bp)
#define STATUS_MASK_CH1_PEAK_DET_bp 2
#define STATUS_MASK_CH1_PEAK_DET_bm (1 << STATUS_MASK_CH1_PEAK_DET_bp)
#define STATUS_MASK_CH2_PEAK_DET_bp 3
#define STATUS_MASK_CH2_PEAK_DET_bm (1 << STATUS_MASK_CH2_PEAK_DET_bp)
#define STATUS_MASK_PLL_LOCKED_bp 4
#define STATUS_MASK_PLL_LOCKED_bm (1 << STATUS_MASK_PLL_LOCKED_bp)

#define STATUS_BITS_CLEAR_reg 19
#define STATUS_BITS_CLEAR_reg_def 0
#define STATUS_CLEAR_CH1_PEAK_LATCH_bp 0
#define STATUS_CLEAR_CH1_PEAK_LATCH_bm (1 << STATUS_CLEAR_CH1_PEAK_LATCH_bp)
#define STATUS_CLEAR_CH2_PEAK_LATCH_bp 1
#define STATUS_CLEAR_CH2_PEAK_LATCH_bm (1 << STATUS_CLEAR_CH2_PEAK_LATCH_bp)

#define CHARGE_PUMP_CONFIG_reg 21
#define CHARGE_PUMP_CONFIG_reg_def 1
#define CP_PDB_MUTE_bp 0
#define CP_PDB_MUTE_bm (1 << CP_PDB_MUTE_bp)

#define CHARGE_PUMP_CLOCK_DIV_reg 23
#define CHARGE_PUMP_CLOCK_DIV_reg_def 31

#define GPIO1_2_CONFIG_reg 39
#define GPIO1_2_CONFIG_reg_def 0
#define GPIO1_CFG_bp 0
#define GPIO1_CFG_bm (15 << GPIO1_CFG_bp)
#define GPIO1_OFF_bm (0 << GPIO1_CFG_bp)
#define GPIO1_MUTE_DAC_bm (1 << GPIO1_CFG_bp)
#define GPIO1_CLOCK_VALID_FLAG_bm (2 << GPIO1_CFG_bp)
#define GPIO1_PLL_LOCKED_FLAG_bm (3 << GPIO1_CFG_bp)
#define GPIO1_DAC_MIN_VOL_FLAG_bm (4 << GPIO1_CFG_bp)
#define GPIO1_DAC_AUTOMUTE_STATUS_bm (5 << GPIO1_CFG_bp)
#define GPIO1_DAC_SOFT_RAMP_DONE_FLAG_bm (6 << GPIO1_CFG_bp)
#define GPIO1_ADC_CH1_PEAK_FLAG_bm (7 << GPIO1_CFG_bp)
#define GPIO1_ADC_CH2_PEAK_FLAG_bm (8 << GPIO1_CFG_bp)
#define GPIO1_PWM_SIGNAL_bm (9 << GPIO1_CFG_bp)
#define GPIO1_OR_OF_STATUS_BITS_bm (10 << GPIO1_CFG_bp)
#define GPIO1_BCK_WS_MONITOR_bm (11 << GPIO1_CFG_bp)
#define GPIO1_MCLK_24M_bm (12 << GPIO1_CFG_bp)
#define GPIO1_MCLK_128FS_bm (13 << GPIO1_CFG_bp)
#define GPIO1_OUTPUT0_bm (14 << GPIO1_CFG_bp)
#define GPIO1_OUTPUT1_bm (15 << GPIO1_CFG_bp)
#define GPIO2_CFG_bp 4
#define GPIO2_CFG_bm (15 << GPIO2_CFG_bp)
#define GPIO2_OFF (0 << GPIO2_CFG_bp)
#define GPIO2_MUTE_DAC_bm (1 << GPIO2_CFG_bp)
#define GPIO2_CLOCK_VALID_FLAG_bm (2 << GPIO2_CFG_bp)
#define GPIO2_PLL_LOCKED_FLAG_bm (3 << GPIO2_CFG_bp)
#define GPIO2_DAC_MIN_VOL_FLAG_bm (4 << GPIO2_CFG_bp)
#define GPIO2_DAC_AUTOMUTE_STATUS_bm (5 << GPIO2_CFG_bp)
#define GPIO2_DAC_SOFT_RAMP_DONE_FLAG_bm (6 << GPIO2_CFG_bp)
#define GPIO2_ADC_CH1_PEAK_FLAG_bm (7 << GPIO2_CFG_bp)
#define GPIO2_ADC_CH2_PEAK_FLAG_bm (8 << GPIO2_CFG_bp)
#define GPIO2_PWM_SIGNAL_bm (9 << GPIO2_CFG_bp)
#define GPIO2_OR_OF_STATUS_BITS_bm (10 << GPIO2_CFG_bp)
#define GPIO2_BCK_WS_MONITOR_bm (11 << GPIO2_CFG_bp)
#define GPIO2_MCLK_24M_bm (12 << GPIO2_CFG_bp)
#define GPIO2_MCLK_128FS_bm (13 << GPIO2_CFG_bp)
#define GPIO2_OUTPUT0_bm (14 << GPIO2_CFG_bp)
#define GPIO2_OUTPUT1_bm (15 << GPIO2_CFG_bp)

#define GPIO3_4_CONFIG_reg 40
#define GPIO3_4_CONFIG_reg_def 0
#define GPIO3_CFG_bp 0
#define GPIO3_CFG_bm (15 << GPIO3_CFG_bp)
#define GPIO3_OFF_bm (0 << GPIO3_CFG_bp)
#define GPIO3_MUTE_DAC_bm (1 << GPIO3_CFG_bp)
#define GPIO3_CLOCK_VALID_FLAG_bm (2 << GPIO3_CFG_bp)
#define GPIO3_PLL_LOCKED_FLAG_bm (3 << GPIO3_CFG_bp)
#define GPIO3_DAC_MIN_VOL_FLAG_bm (4 << GPIO3_CFG_bp)
#define GPIO3_DAC_AUTOMUTE_STATUS_bm (5 << GPIO3_CFG_bp)
#define GPIO3_DAC_SOFT_RAMP_DONE_FLAG_bm (6 << GPIO3_CFG_bp)
#define GPIO3_ADC_CH1_PEAK_FLAG_bm (7 << GPIO3_CFG_bp)
#define GPIO3_ADC_CH2_PEAK_FLAG_bm (8 << GPIO3_CFG_bp)
#define GPIO3_PWM_SIGNAL_bm (9 << GPIO3_CFG_bp)
#define GPIO3_OR_OF_STATUS_BITS_bm (10 << GPIO3_CFG_bp)
#define GPIO3_BCK_WS_MONITOR_bm (11 << GPIO3_CFG_bp)
#define GPIO3_MCLK_24M_bm (12 << GPIO3_CFG_bp)
#define GPIO3_MCLK_128FS_bm (13 << GPIO3_CFG_bp)
#define GPIO3_OUTPUT0_bm (14 << GPIO3_CFG_bp)
#define GPIO3_OUTPUT1_bm (15 << GPIO3_CFG_bp)
#define GPIO4_CFG_bp 4
#define GPIO4_CFG_bm (15 << GPIO4_CFG_bp)
#define GPIO4_OFF_bm (0 << GPIO4_CFG_bp)
#define GPIO4_MUTE_DAC_bm (1 << GPIO4_CFG_bp)
#define GPIO4_CLOCK_VALID_FLAG_bm (2 << GPIO4_CFG_bp)
#define GPIO4_PLL_LOCKED_FLAG_bm (3 << GPIO4_CFG_bp)
#define GPIO4_DAC_MIN_VOL_FLAG_bm (4 << GPIO4_CFG_bp)
#define GPIO4_DAC_AUTOMUTE_STATUS_bm (5 << GPIO4_CFG_bp)
#define GPIO4_DAC_SOFT_RAMP_DONE_FLAG_bm (6 << GPIO4_CFG_bp)
#define GPIO4_ADC_CH1_PEAK_FLAG_bm (7 << GPIO4_CFG_bp)
#define GPIO4_ADC_CH2_PEAK_FLAG_bm (8 << GPIO4_CFG_bp)
#define GPIO4_PWM_SIGNAL_bm (9 << GPIO4_CFG_bp)
#define GPIO4_OR_OF_STATUS_BITS_bm (10 << GPIO4_CFG_bp)
#define GPIO4_BCK_WS_MONITOR_bm (11 << GPIO4_CFG_bp)
#define GPIO4_MCLK_24M_bm (12 << GPIO4_CFG_bp)
#define GPIO4_MCLK_128FS_bm (13 << GPIO4_CFG_bp)
#define GPIO4_OUTPUT0_bm (14 << GPIO4_CFG_bp)
#define GPIO4_OUTPUT1_bm (15 << GPIO4_CFG_bp)

#define GPIO_CONTROLS1_reg 41
#define GPIO_CONTROLS1_reg_def 0
#define GPIO1_OE_bp 0
#define GPIO1_OE_bm (1 << GPIO1_OE_bp)
#define GPIO2_OE_bp 1
#define GPIO2_OE_bm (1 << GPIO2_OE_bp)
#define GPIO3_OE_bp 2
#define GPIO3_OE_bm (1 << GPIO3_OE_bp)
#define GPIO4_OE_bp 3
#define GPIO4_OE_bm (1 << GPIO4_OE_bp)
#define GPIO1_SDB_bp 4
#define GPIO1_SDB_bm (1 << GPIO1_SDB_bp)
#define GPIO2_SDB_bp 5
#define GPIO2_SDB_bm (1 << GPIO2_SDB_bp)
#define GPIO3_SDB_bp 6
#define GPIO3_SDB_bm (1 << GPIO3_SDB_bp)
#define GPIO4_SDB_bp 7
#define GPIO4_SDB_bm (1 << GPIO4_SDB_bp)

#define GPIO_CONTROLS2_reg 42
#define GPIO_CONTROLS2_reg_def 0
#define GPIO1_WK_EN_bp 0
#define GPIO1_WK_EN_bm (1 << GPIO1_WK_EN_bp)
#define GPIO2_WK_EN_bp 1
#define GPIO2_WK_EN_bm (1 << GPIO2_WK_EN_bp)
#define GPIO3_WK_EN_bp 2
#define GPIO3_WK_EN_bm (1 << GPIO3_WK_EN_bp)
#define GPIO4_WK_EN_bp 3
#define GPIO4_WK_EN_bm (1 << GPIO4_WK_EN_bp)
#define INVERT_GPIO1_bp 4
#define INVERT_GPIO1_bm (1 << INVERT_GPIO1_bp)
#define INVERT_GPIO2_bp 5
#define INVERT_GPIO2_bm (1 << INVERT_GPIO2_bp)
#define INVERT_GPIO3_bp 6
#define INVERT_GPIO3_bm (1 << INVERT_GPIO3_bp)
#define INVERT_GPIO4_bp 7
#define INVERT_GPIO4_bm (1 << INVERT_GPIO4_bp)

#define GPIO_READ_reg 43
#define GPIO_READ_reg_def 0
#define GPIO1_READ_bp 0
#define GPIO1_READ_bm (1 << GPIO1_READ_bp)
#define GPIO2_READ_bp 1
#define GPIO2_READ_bm (1 << GPIO2_READ_bp)
#define GPIO3_READ_bp 2
#define GPIO3_READ_bm (1 << GPIO3_READ_bp)
#define GPIO4_READ_bp 3
#define GPIO4_READ_bm (1 << GPIO4_READ_bp)

#define GPIO_OUTPUT_LOGIC_reg 44
#define GPIO_OUTPUT_LOGIC_reg_def 7
#define GPIO_AND_VOL_MIN_bp 0
#define GPIO_AND_VOL_MIN_bm (1 << GPIO_AND_VOL_MIN_bp)
#define GPIO_AND_AUTOMUTE_bp 1
#define GPIO_AND_AUTOMUTE_bm (1 << GPIO_AND_AUTOMUTE_bp)
#define GPIO_AND_SS_RAMP_bp 2
#define GPIO_AND_SS_RAMP_bm (1 << GPIO_AND_SS_RAMP_bp)
#define GPIO_OR_VOL_MIN_bp 3
#define GPIO_OR_VOL_MIN_bm (1 << GPIO_OR_VOL_MIN_bp)
#define GPIO_OR_AUTOMUTE_bp 4
#define GPIO_OR_AUTOMUTE_bm (1 << GPIO_OR_AUTOMUTE_bp)
#define GPIO_OR_SS_RAMP_bp 5
#define GPIO_OR_SS_RAMP_bm (1 << GPIO_OR_SS_RAMP_bp)
#define FLAG_CH_SEL_bp 6
#define FLAG_CH_SEL_bm (1 << FLAG_CH_SEL_bp)

#define PWM_COUNT_reg 45
#define PWM_COUNT_reg_def 0

#define PWM_FREQUENCY_LO_reg 46
#define PWM_FREQUENCY_LO_reg_def 0
#define PWM_FREQUENCY_HI_reg 47
#define PWM_FREQUENCY_HI_reg_def 0

#define ADC_DBQ_COEFF_SEL_reg 48
#define ADC_DBQ_COEFF_SEL_reg_def 1
#define ADC_DBQ_COEFF_SEL_bp 0
#define ADC_DBQ_COEFF_SEL_bm (31 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_PROG_bm (0 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_BYP_bm (1 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_ORDER1_DC_CLOCK_bm (2 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_48KHZ_DEEMPH_bm (3 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_44KHZ_DEEMPH_bm (4 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_32KHZ_DEEMPH_bm (5 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_RIAA_DEEMPH_bm (6 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_RIAA_PREEMPH_bm (7 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_48KHZ_bm (8 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_96KHZ_bm (9 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_192KHZ_bm (10 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_384KHZ_bm (11 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_48KHZ_bm (12 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_96KHZ_bm (13 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_192KHZ_bm (14 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_384KHZ_bm (15 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_44KHZ_bm (16 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_88KHZ_bm (17 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_176KHZ_bm (18 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_80HZ_HP_352KHZ_bm (19 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_44KHZ_bm (20 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_88KHZ_bm (21 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_176KHZ_bm (22 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_COEFF_SEL_120HZ_HP_352KHZ_bm (23 << ADC_DBQ_COEFF_SEL_bp)
#define ADC_DBQ_120HZ_HPF_EN_bp 5
#define ADC_DBQ_120HZ_HPF_EN_bm (1 << ADC_DBQ_120HZ_HPF_EN_bp)
#define ADC_DBQ_80HZ_HPF_EN_bp 6
#define ADC_DBQ_80HZ_HPF_EN_bm (1 << ADC_DBQ_80HZ_HPF_EN_bp)
#define ADC_DBQ_CLK_FAMILY_SEL_bp 7
#define ADC_DBQ_CLK_FAMILY_SEL_bm (1 << ADC_DBQ_CLK_FAMILY_SEL_bp)

#define ADC_PROG_DBQ_A2_COEFF_1_reg 49
#define ADC_PROG_DBQ_A2_COEFF_1_reg_def 0
#define ADC_PROG_DBQ_A2_COEFF_2_reg 50
#define ADC_PROG_DBQ_A2_COEFF_2_reg_def 0
#define ADC_PROG_DBQ_A2_COEFF_3_reg 51
#define ADC_PROG_DBQ_A2_COEFF_3_reg_def 0

#define ADC_PROG_DBQ_A1_COEFF_1_reg 52
#define ADC_PROG_DBQ_A1_COEFF_1_reg_def 0
#define ADC_PROG_DBQ_A1_COEFF_2_reg 53
#define ADC_PROG_DBQ_A1_COEFF_2_reg_def 0
#define ADC_PROG_DBQ_A1_COEFF_3_reg 54
#define ADC_PROG_DBQ_A1_COEFF_3_reg_def 0

#define ADC_PROG_DBQ_B2_COEFF_1_reg 55
#define ADC_PROG_DBQ_B2_COEFF_1_reg_def 0
#define ADC_PROG_DBQ_B2_COEFF_2_reg 56
#define ADC_PROG_DBQ_B2_COEFF_2_reg_def 0
#define ADC_PROG_DBQ_B2_COEFF_3_reg 57
#define ADC_PROG_DBQ_B2_COEFF_3_reg_def 0

#define ADC_PROG_DBQ_B1_COEFF_1_reg 58
#define ADC_PROG_DBQ_B1_COEFF_1_reg_def 0
#define ADC_PROG_DBQ_B1_COEFF_2_reg 59
#define ADC_PROG_DBQ_B1_COEFF_2_reg_def 0
#define ADC_PROG_DBQ_B1_COEFF_3_reg 60
#define ADC_PROG_DBQ_B1_COEFF_3_reg_def 0

#define ADC_PROG_DBQ_B0_COEFF_1_reg 61
#define ADC_PROG_DBQ_B0_COEFF_1_reg_def 0
#define ADC_PROG_DBQ_B0_COEFF_2_reg 62
#define ADC_PROG_DBQ_B0_COEFF_2_reg_def 0
#define ADC_PROG_DBQ_B0_COEFF_3_reg 63
#define ADC_PROG_DBQ_B0_COEFF_3_reg_def 0

#define ADC_FIR_FILTER_reg 64
#define ADC_FIR_FILTER_reg_def 0
#define ADC_FILTER_SHAPE_bp 5
#define ADC_FILTER_SHAPE_bm (7 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_MIN_PHASE_bm (0 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_LIN_PHASE_FAST_ROLLOFF_APODIZING_bm (1 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_LIN_PHASE_FAST_ROLLOFF_bm (2 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_LIN_PHASE_FAST_ROLLOFF_LOW_RIPPLE_bm (3 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_LIN_PHASE_SLOW_ROLLOFF_bm (4 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_MIN_PHASE_FAST_ROLLOFF_bm (5 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_MIN_PHASE_SLOW_ROLLOFF_bm (6 << ADC_FILTER_SHAPE_bp)
#define ADC_FILTER_SHAPE_MIN_PHASE_SLOW_ROLLOFF_LOW_DISPERSION_bm (7 << ADC_FILTER_SHAPE_bp)

#define ADC_DC_BLOCKING_reg 65
#define ADC_DC_BLOCKING_reg_def 255
#define CH1_DC_BLOCK_EN_bp 6
#define CH1_DC_BLOCK_EN_bm (1 << CH1_DC_BLOCK_EN_bp)
#define CH2_DC_BLOCK_EN_bp 7
#define CH2_DC_BLOCK_EN_bm (1 << CH2_DC_BLOCK_EN_bp)

#define PDM_CONFIG_reg 66
#define PDM_CONFIG_reg_def 42
#define PDM_PHASE_bp 4
#define PDM_PHASE_bm (1 << PDM_PHASE_bp)
#define PDM_SAMPLE_EDGE_bp 5
#define PDM_SAMPLE_EDGE_bm (1 << PDM_SAMPLE_EDGE_bp)
#define PDM_INPUT_SEL_bp 6
#define PDM_INPUT_SEL_bm (1 << PDM_INPUT_SEL_bp)

#define PDM_CLK_SELECT_reg 67
#define PDM_CLK_SELECT_reg_def 3
#define MCLK_PDM_DIV_bp 0
#define MCLK_PDM_DIV_bm (127 << MCLK_PDM_DIV_bp)

#define ADC_VOLUME_CH1_reg 68
#define ADC_VOLUME_CH1_reg_def 0

#define ADC_VOLUME_CH2_reg 69
#define ADC_VOLUME_CH2_reg_def 0

#define ADC_MIX_VOLUME_CH1_reg 70
#define ADC_MIX_VOLUME_CH1_reg_def 255

#define ADC_MIX_VOLUME_CH2_reg 71
#define ADC_MIX_VOLUME_CH2_reg_def 255

#define ADC_DIGITAL_GAIN_reg 72
#define ADC_DIGITAL_GAIN_reg_def 0
#define ADC_DIGITAL_GAIN_CH1_bp 0
#define ADC_DIGITAL_GAIN_CH1_bm (7 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_0DB_bm (0 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_6DB_bm (1 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_12DB_bm (2 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_18DB_bm (3 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_24DB_bm (4 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_30DB_bm (5 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_36DB_bm (6 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH1_42DB_bm (7 << ADC_DIGITAL_GAIN_CH1_bp)
#define ADC_DIGITAL_GAIN_CH2_bp 4
#define ADC_DIGITAL_GAIN_CH2_bm (7 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_0DB_bm (0 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_6DB_bm (1 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_12DB_bm (2 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_18DB_bm (3 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_24DB_bm (4 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_30DB_bm (5 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_36DB_bm (6 << ADC_DIGITAL_GAIN_CH2_bp)
#define ADC_DIGITAL_GAIN_CH2_42DB_bm (7 << ADC_DIGITAL_GAIN_CH2_bp)

#define ADC_PHASE_INVERSION_reg 73
#define ADC_PHASE_INVERSION_reg_def 0
#define ADC_VOL_PHASE_INV_CH1_bp 0
#define ADC_VOL_PHASE_INV_CH1_bm (1 << ADC_VOL_PHASE_INV_CH1_bp)
#define ADC_VOL_PHASE_INV_CH2_bp 1
#define ADC_VOL_PHASE_INV_CH2_bm (1 << ADC_VOL_PHASE_INV_CH2_bp)
#define ADC_MIX_VOL_PHASE_INV_CH1_bp 2
#define ADC_MIX_VOL_PHASE_INV_CH1_bm (1 << ADC_MIX_VOL_PHASE_INV_CH1_bp)
#define ADC_MIX_VOL_PHASE_INV_CH2_bp 3
#define ADC_MIX_VOL_PHASE_INV_CH2_bm (1 << ADC_MIX_VOL_PHASE_INV_CH2_bp)

#define PGA_GAIN_CONTROL_reg 82
#define PGA_GAIN_CONTROL_reg_def 0
#define PGA_GAIN_CTRL_CH1_bp 0
#define PGA_GAIN_CTRL_CH1_bm (15 << PGA_GAIN_CTRL_CH1_bp)
#define PGA_GAIN_CTRL_CH2_bp 4
#define PGA_GAIN_CTRL_CH2_bm (15 << PGA_GAIN_CTRL_CH2_bp)

#define PEAK_DETECT_ENABLE_reg 88
#define PEAK_DETECT_ENABLE_reg_def 0
#define PEAK_DETECT_CH1_EN_bp 0
#define PEAK_DETECT_CH1_EN_bm (1 << PEAK_DETECT_CH1_EN_bp)
#define PEAK_DETECT_CH2_EN_bp 1
#define PEAK_DETECT_CH2_EN_bm (1 << PEAK_DETECT_CH2_EN_bp)

#define PEAK_DETECT_CONFIG_reg 89
#define PEAK_DETECT_CONFIG_reg_def 2
#define PEAK_DECAY_RATE_bp 0
#define PEAK_DECAY_RATE_bm (31 << PEAK_DECAY_RATE_bp)
#define LOCK_PEAK_VALUE_bp 6
#define LOCK_PEAK_VALUE_bm (1 << LOCK_PEAK_VALUE_bp)

#define PEAK_THRESHOLD_CH1_reg 90
#define PEAK_THRESHOLD_CH1_reg_def 255
#define PEAK_THRESHOLD_CH2_reg 91
#define PEAK_THRESHOLD_CH2_reg_def 255

#define MIC_BIAS_reg 94
#define MIC_BIAS_reg_def 2
#define MB_VR_SET_bp 0
#define MB_VR_SET_bm (7 << MB_VR_SET_bp)
#define MB_VR_SET_1V45_bm (0 << MB_VR_SET_bp)
#define MB_VR_SET_2V55_bm (1 << MB_VR_SET_bp)
#define MB_VR_SET_2V65_bm (2 << MB_VR_SET_bp)
#define MB_VR_SET_2V75_bm (3 << MB_VR_SET_bp)
#define MB_VR_SET_1V65_bm (4 << MB_VR_SET_bp)
#define MB_VR_SET_1V75_bm (5 << MB_VR_SET_bp)
#define MB_VR_SET_1V85_bm (6 << MB_VR_SET_bp)
#define MB_VR_SET_1V95_bm (7 << MB_VR_SET_bp)
#define MB_PDB_bp 3
#define MB_PDB_bm (1 << MB_PDB_bp)
#define MB_VR_BYPB_bp 6
#define MB_VR_BYPB_bm (1 << MB_VR_BYPB_bp)

#define DAC_NSMOD_SEL_reg 100
#define DAC_NSMOD_SEL_reg_def 0
#define NSMOD_CH2_SEL_bp 0
#define NSMOD_CH2_SEL_bm (1 << NSMOD_CH2_SEL_bp)

#define DAC_DBQ_COEFF_SEL_reg 102
#define DAC_DBQ_COEFF_SEL_reg_def 1
#define DAC_DBQ_COEFF_SEL_bp 0
#define DAC_DBQ_COEFF_SEL_bm (31 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_PROG_bm (0 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_BYP_bm (1 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_ORDER1_DC_CLOCK_bm (2 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_48KHZ_DEEMPH_bm (3 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_44KHZ_DEEMPH_bm (4 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_32KHZ_DEEMPH_bm (5 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_RIAA_DEEMPH_bm (6 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_RIAA_PREEMPH_bm (7 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_48KHZ_bm (8 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_96KHZ_bm (9 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_192KHZ_bm (10 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_384KHZ_bm (11 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_48KHZ_bm (12 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_96KHZ_bm (13 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_192KHZ_bm (14 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_384KHZ_bm (15 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_44KHZ_bm (16 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_88KHZ_bm (17 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_176KHZ_bm (18 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_80HZ_HP_352KHZ_bm (19 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_44KHZ_bm (20 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_88KHZ_bm (21 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_176KHZ_bm (22 << DAC_DBQ_COEFF_SEL_bp)
#define DAC_DBQ_COEFF_SEL_120HZ_HP_352KHZ_bm (23 << DAC_DBQ_COEFF_SEL_bp)

#define DAC_PROG_DBQ_A2_COEFF_1_reg 103
#define DAC_PROG_DBQ_A2_COEFF_1_reg_def 0
#define DAC_PROG_DBQ_A2_COEFF_2_reg 104
#define DAC_PROG_DBQ_A2_COEFF_2_reg_def 0
#define DAC_PROG_DBQ_A2_COEFF_3_reg 105
#define DAC_PROG_DBQ_A2_COEFF_3_reg_def 0

#define DAC_PROG_DBQ_A1_COEFF_1_reg 106
#define DAC_PROG_DBQ_A1_COEFF_1_reg_def 0
#define DAC_PROG_DBQ_A1_COEFF_2_reg 107
#define DAC_PROG_DBQ_A1_COEFF_2_reg_def 0
#define DAC_PROG_DBQ_A1_COEFF_3_reg 108
#define DAC_PROG_DBQ_A1_COEFF_3_reg_def 0

#define DAC_PROG_DBQ_B2_COEFF_1_reg 109
#define DAC_PROG_DBQ_B2_COEFF_1_reg_def 0
#define DAC_PROG_DBQ_B2_COEFF_2_reg 110
#define DAC_PROG_DBQ_B2_COEFF_2_reg_def 0
#define DAC_PROG_DBQ_B2_COEFF_3_reg 111
#define DAC_PROG_DBQ_B2_COEFF_3_reg_def 0

#define DAC_PROG_DBQ_B1_COEFF_1_reg 112
#define DAC_PROG_DBQ_B1_COEFF_1_reg_def 0
#define DAC_PROG_DBQ_B1_COEFF_2_reg 113
#define DAC_PROG_DBQ_B1_COEFF_2_reg_def 0
#define DAC_PROG_DBQ_B1_COEFF_3_reg 114
#define DAC_PROG_DBQ_B1_COEFF_3_reg_def 0

#define DAC_PROG_DBQ_B0_COEFF_1_reg 115
#define DAC_PROG_DBQ_B0_COEFF_1_reg_def 0
#define DAC_PROG_DBQ_B0_COEFF_2_reg 116
#define DAC_PROG_DBQ_B0_COEFF_2_reg_def 0
#define DAC_PROG_DBQ_B0_COEFF_3_reg 117
#define DAC_PROG_DBQ_B0_COEFF_3_reg_def 0

#define DAC_FILTER_CONFIG_reg 118
#define DAC_FILTER_CONFIG_reg_def 0
#define DAC_FILTER_SHAPE_bp 0
#define DAC_FILTER_SHAPE_bm (7 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_MIN_PHASE_bm (0 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_LIN_PHASE_FAST_ROLLOFF_APODIZING_bm (1 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_LIN_PHASE_FAST_ROLLOFF_bm (2 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_LIN_PHASE_FAST_ROLLOFF_LOW_RIPPLE_bm (3 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_LIN_PHASE_SLOW_ROLLOFF_bm (4 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_MIN_PHASE_FAST_ROLLOFF_bm (5 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_MIN_PHASE_SLOW_ROLLOFF_bm (6 << DAC_FILTER_SHAPE_bp)
#define DAC_FILTER_SHAPE_MIN_PHASE_SLOW_ROLLOFF_LOW_DISPERSION_bm (7 << DAC_FILTER_SHAPE_bp)
#define BYPASS_FIR2X_bp 3
#define BYPASS_FIR2X_bm (1 << BYPASS_FIR2X_bp)
#define BYPASS_FIR4X_bp 4
#define BYPASS_FIR4X_bm (1 << BYPASS_FIR4X_bp)
#define BYPASS_IIR_bp 5
#define BYPASS_IIR_bm (1 << BYPASS_IIR_bp)

#define DAC_VOLUME_CH1_reg 123
#define DAC_VOLUME_CH1_reg_def 2

#define DAC_VOLUME_CH2_reg 124
#define DAC_VOLUME_CH2_reg_def 2

#define DAC_MIX_VOLUME_CH1_reg 125
#define DAC_MIX_VOLUME_CH1_reg_def 255

#define DAC_MIX_VOLUME_CH2_reg 126
#define DAC_MIX_VOLUME_CH2_reg_def 255

#define DIRECT_MONITOR_VOLUME_CH1_reg 127
#define DIRECT_MONITOR_VOLUME_CH1_reg_def 255

#define DIRECT_MONITOR_VOLUME_CH2_reg 128
#define DIRECT_MONITOR_VOLUME_CH2_reg_def 255

#define DAC_DIGITAL_GAIN_reg 135
#define DAC_DIGITAL_GAIN_reg_def 0
#define DAC_DIGITAL_GAIN_CH1_bp 0
#define DAC_DIGITAL_GAIN_CH1_bm (7 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_0DB_bm (0 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_6DB_bm (1 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_12DB_bm (2 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_18DB_bm (3 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_24DB_bm (4 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_30DB_bm (5 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_36DB_bm (6 << DAC_DIGITAL_GAIN_CH1_bp)
#define DAC_DIGITAL_GAIN_CH1_42DB_bm (7 << DAC_DIGITAL_GAIN_CH1_bp)
#define DIR_MON_MUTE_CH1_bp 3
#define DIR_MON_MUTE_CH1_bm (1 << DIR_MON_MUTE_CH1_bp)
#define DAC_DIGITAL_GAIN_CH2_bp 4
#define DAC_DIGITAL_GAIN_CH2_bm (7 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_0DB_bm (0 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_6DB_bm (1 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_12DB_bm (2 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_18DB_bm (3 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_24DB_bm (4 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_30DB_bm (5 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_36DB_bm (6 << DAC_DIGITAL_GAIN_CH2_bp)
#define DAC_DIGITAL_GAIN_CH2_42DB_bm (7 << DAC_DIGITAL_GAIN_CH2_bp)
#define DIR_MON_MUTE_CH2_bp 7
#define DIR_MON_MUTE_CH2_bm (1 << DIR_MON_MUTE_CH2_bp)

#define DAC_PHASE_INVERSION_reg 136
#define DAC_PHASE_INVERSION_reg_def 0
#define DAC_VOL_PHASE_INV_CH1_bp 0
#define DAC_VOL_PHASE_INV_CH1_bm (1 << DAC_VOL_PHASE_INV_CH1_bp)
#define DAC_VOL_PHASE_INV_CH2_bp 1
#define DAC_VOL_PHASE_INV_CH2_bm (1 << DAC_VOL_PHASE_INV_CH2_bp)
#define DAC_MIX_VOL_PHASE_INV_CH1_bp 2
#define DAC_MIX_VOL_PHASE_INV_CH1_bm (1 << DAC_MIX_VOL_PHASE_INV_CH1_bp)
#define DAC_MIX_VOL_PHASE_INV_CH2_bp 3
#define DAC_MIX_VOL_PHASE_INV_CH2_bm (1 << DAC_MIX_VOL_PHASE_INV_CH2_bp)
#define DIR_MON_VOL_PHASE_INV_CH1_bp 4
#define DIR_MON_VOL_PHASE_INV_CH1_bm (1 << DIR_MON_VOL_PHASE_INV_CH1_bp)
#define DIR_MON_VOL_PHASE_INV_CH2_bp 5
#define DIR_MON_VOL_PHASE_INV_CH2_bm (1 << DIR_MON_VOL_PHASE_INV_CH2_bp)
#define DIR_MON_MONO_CH1_bp 6
#define DIR_MON_MONO_CH1_bm (1 << DIR_MON_MONO_CH1_bp)
#define DIR_MON_MONO_CH2_bp 7
#define DIR_MON_MONO_CH2_bm (1 << DIR_MON_MONO_CH2_bp)

#define DAC_MUTE_reg 137
#define DAC_MUTE_reg_def 0
#define DAC_MUTE_CH1_bp 0
#define DAC_MUTE_CH1_bm (1 << DAC_MUTE_CH1_bp)
#define DAC_MUTE_CH2_bp 1
#define DAC_MUTE_CH2_bm (1 << DAC_MUTE_CH2_bp)

#define SOFT_RAMP_CONFIG_reg 138
#define SOFT_RAMP_CONFIG_reg_def 35
#define SOFT_RAMP_TIME_bp 0
#define SOFT_RAMP_TIME_bm (31 << SOFT_RAMP_TIME_bp)
#define MUTE_RAMP_TO_GROUND_bp 5
#define MUTE_RAMP_TO_GROUND_bm (1 << MUTE_RAMP_TO_GROUND_bp)

#define AUTOMUTE_ENABLE_reg 139
#define AUTOMUTE_ENABLE_reg_def 3
#define AUTOMUTE_EN_CH1_bp 0
#define AUTOMUTE_EN_CH1_bm (1 << AUTOMUTE_EN_CH1_bp)
#define AUTOMUTE_EN_CH2_bp 1
#define AUTOMUTE_EN_CH2_bm (1 << AUTOMUTE_EN_CH2_bp)

#define AUTOMUTE_TIME1_reg 140
#define AUTOMUTE_TIME1_reg_def 15
#define AUTOMUTE_TIME2_reg 141
#define AUTOMUTE_TIME2_reg_def 0
#define AUTOMUTE_TIME2_bp 0
#define AUTOMUTE_TIME2_bm (7 << AUTOMUTE_TIME2_bp)

#define AUTOMUTE_LEVEL1_reg 142
#define AUTOMUTE_LEVEL1_reg_def 8
#define AUTOMUTE_LEVEL2_reg 143
#define AUTOMUTE_LEVEL2_reg_def 0

#define AUTOMUTE_OFF_LEVEL1_reg 144
#define AUTOMUTE_OFF_LEVEL1_reg_def 10
#define AUTOMUTE_OFF_LEVEL2_reg 145
#define AUTOMUTE_OFF_LEVEL2_reg_def 0

#define PLL_CLOCK_SELECT_reg 164
#define PLL_CLOCK_SELECT_reg_def 33
#define EN_MCLK_IN_bp 0
#define EN_MCLK_IN_bm (1 << EN_MCLK_IN_bp)
#define SEL_MCLK_IN_bp 1
#define SEL_MCLK_IN_bm (3 << SEL_MCLK_IN_bp)
#define SEL_MCLK_IN_ACLK_bm (0 << SEL_MCLK_IN_bp)
#define SEL_MCLK_IN_PLL_bm (2 << SEL_MCLK_IN_bp)
#define EN_PLL_CLK_IN_bp 3
#define EN_PLL_CLK_IN_bm (1 << EN_PLL_CLK_IN_bp)
#define SEL_PLL_CLK_IN_bp 4
#define SEL_PLL_CLK_IN_bm (3 << SEL_PLL_CLK_IN_bp)
#define SEL_PLL_CLK_IN_ACLK_bm (0 << SEL_PLL_CLK_IN_bp)
#define SEL_PLL_CLK_IN_BCK_bm (2 << SEL_PLL_CLK_IN_bp)
#define PLL_CLK_PHASE_INV_bp 6
#define PLL_CLK_PHASE_INV_bm (1 << PLL_CLK_PHASE_INV_bp)

#define PLL_VCO_CP_reg 165
#define PLL_VCO_CP_reg_def 48
#define PLL_DIG_RSTB_bp 0
#define PLL_DIG_RSTB_bm (1 << PLL_DIG_RSTB_bp)
#define PLL_CLKSMP_PDB_bp 1
#define PLL_CLKSMP_PDB_bm (1 << PLL_CLKSMP_PDB_bp)
#define PLL_VCO_PDB_bp 2
#define PLL_VCO_PDB_bm (1 << PLL_VCO_PDB_bp)
#define PLL_CP_PDB_bp 3
#define PLL_CP_PDB_bm (1 << PLL_CP_PDB_bp)

#define PLL_REGULATOR_reg 166
#define PLL_REGULATOR_reg_def 2
#define PLL_REG_PDB_bp 3
#define PLL_REG_PDB_bm (1 << PLL_REG_PDB_bp)

#define PLL_FEEDBACK_DIV1_reg 167
#define PLL_FEEDBACK_DIV1_reg_def 0
#define PLL_FEEDBACK_DIV2_reg 168
#define PLL_FEEDBACK_DIV2_reg_def 0
#define PLL_FEEDBACK_DIV3_reg 169
#define PLL_FEEDBACK_DIV3_reg_def 16

#define PLL_IN_OUT_DIV1_reg 170
#define PLL_IN_OUT_DIV1_reg_def 0
#define PLL_IN_OUT_DIV2_reg 171
#define PLL_IN_OUT_DIV2_reg_def 50
#define PLL_CLK_IN_DIV2_bp 0
#define PLL_CLK_IN_DIV2_bm (1 << PLL_CLK_IN_DIV2_bp)
#define PLL_FB_DIV_LOAD_bp 1
#define PLL_FB_DIV_LOAD_bm (1 << PLL_FB_DIV_LOAD_bp)
#define PLL_CLK_OUT_DIV_bp 4
#define PLL_CLK_OUT_DIV_bm (1 << PLL_CLK_OUT_DIV_bp)

#define CODEC_VALIDITY_READ_reg 224
#define AUTO_CH_NUM_bp 0
#define AUTO_CH_NUM_bm (31 << AUTO_CH_NUM_bp)
#define ADC_TDM_VALID_bp 5
#define ADC_TDM_VALID_bm (1 << ADC_TDM_VALID_bp)
#define DAC_TDM_VALID_bp 6
#define DAC_TDM_VALID_bm (1 << DAC_TDM_VALID_bp)
#define PLL_LOCKED_bp 7
#define PLL_LOCKED_bm (1 << PLL_LOCKED_bp)

#define CHIP_ID_reg 225
#define CHIP_ID_reg_def 0xAA

#define AUTO_FS_READ_reg 230
#define MCLK_128FS_DIV_AUTO_bp 0
#define MCLK_128FS_DIV_AUTO_bm (63 << MCLK_128FS_DIV_AUTO_bp)
#define MCLK_128FS_HALF_DIV_AUTO_bp 6
#define MCLK_128FS_HALF_DIV_AUTO_bm (1 << MCLK_128FS_HALF_DIV_AUTO_bp)
#define EN_64FS_MODE_AUTO_bp 7
#define EN_64FS_MODE_AUTO_bm (1 << EN_64FS_MODE_AUTO_bp)

#define BCK_WS_VALID_reg 231
#define WS_INVALID_bp 0
#define WS_INVALID_bm (1 << WS_INVALID_bp)
#define BCK_INVALID_bp 1
#define BCK_INVALID_bm (1 << BCK_INVALID_bp)
#define RATIO_VALID_bp 2
#define RATIO_VALID_bm (1 << RATIO_VALID_bp)

#define GPIO_READBACK_reg 132
#define GPIO1_R_bp 0
#define GPIO1_R_bm (1 << GPIO1_R_bp)
#define GPIO2_R_bp 1
#define GPIO2_R_bm (1 << GPIO2_R_bp)
#define GPIO3_R_bp 2
#define GPIO3_R_bm (1 << GPIO3_R_bp)
#define GPIO4_R_bp 3
#define GPIO4_R_bm (1 << GPIO4_R_bp)

#define PEAK_FLAG_reg 233
#define PEAK_FLAG_CH1_bp 4
#define PEAK_FLAG_CH1_bm (1 << PEAK_FLAG_CH1_bp)
#define PEAK_FLAG_CH2_bp 5
#define PEAK_FLAG_CH2_bm (1 << PEAK_FLAG_CH2_bp)
#define PEAK_FLAG_LAT_CH1_bp 6
#define PEAK_FLAG_LAT_CH1_bm (1 << PEAK_FLAG_LAT_CH1_bp)
#define PEAK_FLAG_LAT_CH2_bp 7
#define PEAK_FLAG_LAT_CH2_bm (1 << PEAK_FLAG_LAT_CH2_bp)

#define PEAK_CH1_READ1_reg 238
#define PEAK_CH1_READ2_reg 239

#define PEAK_CH2_READ1_reg 240
#define PEAK_CH2_READ2_reg 241

#define DAC_VOL_MIN_READ_reg 242
#define VOL_MIN_CH1_bp 0
#define VOL_MIN_CH1_bm (1 << VOL_MIN_CH1_bp)
#define VOL_MIN_CH2_bp 1
#define VOL_MIN_CH2_bm (1 << VOL_MIN_CH2_bp)

#define DAC_AUTOMUTE_READ_reg 243
#define AUTOMUTE_CH1_bp 0
#define AUTOMUTE_CH1_bm (1 << AUTOMUTE_CH1_bp)
#define AUTOMUTE_CH2_bp 1
#define AUTOMUTE_CH2_bm (1 << AUTOMUTE_CH2_bp)

#define DAC_SOFT_RAMP_UP_READ_reg 244
#define SS_RAMP_UP_CH1_bp 0
#define SS_RAMP_UP_CH1_bm (1 << SS_RAMP_UP_CH1_bp)
#define SS_RAMP_UP_CH2_bp 1
#define SS_RAMP_UP_CH2_bm (1 << SS_RAMP_UP_CH2_bp)

#define DAC_SOFT_RAMP_DOWN_READ_reg 245
#define SS_RAMP_DOWN_CH1_bp 0
#define SS_RAMP_DOWN_CH1_bm (1 << SS_RAMP_DOWN_CH1_bp)
#define SS_RAMP_DOWN_CH2_bp 1
#define SS_RAMP_DOWN_CH2_bm (1 << SS_RAMP_DOWN_CH2_bp)

#endif /* SRC_ES9290_REG_H_ */
