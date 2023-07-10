/******************************************************************************
 *
 * Module: Timer0
 *
 * File Name: timer0.h
 *
 * Description: Header file for the timer0 driver
 *
 * Author : Ahmed Gamal
 *******************************************************************************/


#ifndef TIMER_H_
#define TIMER_H_

#include "std_types.h"

#define TIMER0_MODE		TIMER0_NORMAL_MODE

/*
 * Prototype   : void Timer0_init(void);
 * Description : Initialize Timer0
 * Arguments   : void
 * return      : void
 */
void Timer0_init(void);
/*
 * Prototype   : void Timer0_startTimerCount(void);
 * Description : Start Timer0
 * Arguments   : void
 * return      : void
 */
void Timer0_startTimerCount(void);
/*
 * Prototype   : void Timer0_stopTimerCount(void);
 * Description : Stop Timer0
 * Arguments   : void
 * return      : void
 */
void Timer0_stopTimerCount(void);

/*==================================================================================================================
 * Timer0 Normal Mode
 *==================================================================================================================*/
#if TIMER0_MODE == TIMER0_NORMAL_MODE

/*
 * Prototype   : void TIMER0_setDesiredTime(uint8 a_time);
 * Description : Calculate Timer0 tick time for desire input time in ms
 * Arguments   : void
 * return      : void
 */
void TIMER0_setDesiredTime(uint8 a_time);

/*====================================================================
 * Timer0 Over flow Interrupt
 *====================================================================*/
/*
 * Prototype   : void TIMER0_overFlowCallBack(void(*callback_Ptr)(void));
 * Description : Callback function for Timer0 over flow Interrupt
 * Arguments   : pointer to function callback_Ptr
 * return      : void
 */
void TIMER0_overFlowCallBack(void(*callback_Ptr)(void));

/*==================================================================================================================
 * Timer0 CTC Mode
 *==================================================================================================================*/
#elif TIMER0_MODE == TIMER0_CTC_MODE

/*
 * Prototype   : void TIMER0_setDesiredTime(uint8 a_time);
 * Description : Calculate Timer0 tick time for desire input time in ms
 * Arguments   : void
 * return      : void
 */
void TIMER0_setDesiredTime(uint8 a_time);

/*
 * Prototype   : void TIMER0_overFlowCallBack(void(*callback_Ptr)(void));
 * Description : Callback function for Timer0
 * Arguments   : pointer to function callback_Ptr
 * return      : void
 */
void TIMER0_overFlowCallBack(void(*callback_Ptr)(void));


#endif /*TIMER MODE*/


#endif /* TIMER_H_ */
