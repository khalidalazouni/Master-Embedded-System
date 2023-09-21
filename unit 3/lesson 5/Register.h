/*
 * Register.h
 *
 *  Created on: Aug 26, 2023
 *      Author: vip
 */

#ifndef REGISTER_H_
#define REGISTER_H_
#define RCC_Base_Address              0x40021000
#define GPIO_Base_Address             0x40010800
#define RCC_APB2ENR                   *(volatile uint32 * )(RCC_Base_Address + 0x18 )
#define GPIO_CRH                      *(volatile uint32 * )(GPIO_Base_Address + 0x04 )
#define GPIOA_ODR                     *(volatile uint32 * )(GPIO_Base_Address + 0x0C )



#endif /* REGISTER_H_ */
