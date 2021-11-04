/*
 * LCD_Code.c
 *
 * Created: 04/11/2021 21:58:00
 * Author : Default
 */ 


#define F_CPU 8000000UL 
#include <avr/io.h>  
#include <util/delay.h>
#include "HeaderLCD.h"

/*Our main program*/ 
int main(void) { 
	LCD_Init(); /* Initialize LCD */ 
	LCD_String("MSP II:EMT 3202"); /* Write a string on 1st line of LCD*/ 
	LCD_Cmd(0xC0); /* Go to 2nd line*/ 
	LCD_String("Hello World"); /* Write string on 2nd line*/
}

