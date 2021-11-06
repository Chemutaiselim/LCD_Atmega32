/*
 * HeaderLCD.h
 *
 * Created: 04/11/2021 22:03:50
 *  Author: Default
 */ 


#ifndef HEADERLCD_H_
#define HEADERLCD_H_


/*Function Declarations*/ 
void LCD_Cmd(unsigned char cmd); 
void LCD_Char(unsigned char char_data); 
void LCD_Init(void); 
void LCD_Clear(void);
void LCD_String(char *str); 
void LCD_String_xy(char row, char pos, char *str);



#endif /* HEADERLCD_H_ */