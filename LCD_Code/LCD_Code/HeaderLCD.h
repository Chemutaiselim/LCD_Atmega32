/*
 * HeaderLCD.h
 *
 * Created: 04/11/2021 22:03:50
 *  Author: Default
 */ 


#ifndef HEADERLCD_H_
#define HEADERLCD_H_

#define RS 0b00000001
#define RW 0b00000010
#define EN 0b00000100
#define LCD_Data_Port PORTD
#define LCD_Cmd_Port PORTC
#define LCD_Cmd_Dir DDRC
#define LCD_Data_Dir DDRD


/*Function Declarations*/ 
void LCD_Cmd(unsigned char cmd); 
void LCD_Char(unsigned char char_data); 
void LCD_Init(void); 
void LCD_Clear(void);
void LCD_String(char *str); 
void LCD_String_xy(char row, char pos, char *str);



#endif /* HEADERLCD_H_ */