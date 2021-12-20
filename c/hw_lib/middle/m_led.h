/*********************************************************************************************************************
// @company     鸿威技术
// @group       BMS
// @project     3968
// @MCU         apm32f030C8
// @file        m_led
// @author      xieyongqiang(1365168884@qq.com)
// @date        2021-11-22
// @version     V1.0	初始创建

*********************************************************************************************************************/

#ifndef _m_led_h
#define _m_led_h
#include "conf.h"
#include "param.h"



//-------------------------------------------------------------------------------------------------------------------
//  @brief      LED初始化
//  @param      void
//  @return     void
//  @note
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
void LedInit(void);

//-------------------------------------------------------------------------------------------------------------------
//  @brief      SOC显示
//  @param      num
//  @return     void
//  @note
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
void LedShow(ENUM_LED led, uint16 dat);

#endif
