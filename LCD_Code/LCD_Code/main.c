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

#define RS PC0
#define RW PC1
#define EN PC2
#define LCD_Data_Port PORTD
#define LCD_Cmd_Port PORTC
#define LCD_Cmd_Dir DDRC
#define LCD_Data_Dir DDRD

/*Our main program*/ 
int main(void) { 
	LCD_Init(); /* Initialize LCD */ 
	LCD_String("MSP II:EMT 3202"); /* Write a string on 1st line of LCD*/ 
	LCD_Cmd(0xC0); /* Go to 2nd line*/ 
	LCD_String("Hello World"); /* Write string on 2nd line*/
}

