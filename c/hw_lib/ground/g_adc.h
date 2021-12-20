/*********************************************************************************************************************
// @company     鸿威技术
// @group       BMS
// @project
// @MCU         apm32f030C8
// @file        g_adc
// @author      xieyongqiang(1365168884@qq.com)
// @date        2021-11-22
// @version     V1.0	初始创建
*********************************************************************************************************************/

#ifndef _g_adc_h
#define _g_adc_h
#include "common.h"

typedef enum
{
    //100*CHn+PINn
    ADC_CH0_A0 = 100 * 0 + 0,
    ADC_CH1_A1 = 100 * 1 + 1,
    ADC_CH2_A2 = 100 * 2 + 2,
    ADC_CH3_A3 = 100 * 3 + 3,
    ADC_CH4_A4 = 100 * 4 + 4,
    ADC_CH5_A5 = 100 * 5 + 5,
    ADC_CH6_A6 = 100 * 6 + 6,
    ADC_CH7_A7 = 100 * 7 + 7,
    ADC_CH8_B0 = 100 * 8 + 32,
    ADC_CH9_B1 = 100 * 9 + 33,
    ADC_CH10_C0 = 100 * 10 + 64,
    ADC_CH11_C1 = 100 * 11 + 65,
    ADC_CH12_C2 = 100 * 12 + 66,
    ADC_CH13_C3 = 100 * 13 + 67,
    ADC_CH14_C4 = 100 * 14 + 68,
    ADC_CH15_C5 = 100 * 15 + 69,
    ADC_CH_NOT
} ENUM_ADCCH;


//-------------------------------------------------------------------------------------------------------------------
//  @brief      ADC+DMA初始化
//  @param      ch 
//  @return     void
//  @note       
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
void InitAdcDma(ENUM_ADCCH ch);


//-------------------------------------------------------------------------------------------------------------------
//  @brief      获取ADC值
//  @param      ch
//  @return     ADC值
//  @note
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
uint32 GetAdc(ENUM_ADCCH ch);

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ADCDMA中断
//  @param      none
//  @return     void
//  @note
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
void AdcDmaIsr(void);



#endif
