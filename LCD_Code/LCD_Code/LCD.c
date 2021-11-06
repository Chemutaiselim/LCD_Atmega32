/*
 * LCD.c
 *
 * Created: 04/11/2021 22:05:30
 *  Author: Default
 */ 


/*LCD command write function*/ 



void LCD_Cmd(unsigned char cmd){ 
	LCD_Data_Port = cmd; 
	LCD_Cmd_Port &= ~(1<<RS); /* RS=0 command reg. */ 
	LCD_Cmd_Port &= ~(1<<RW); /* RW=0 Write operation */ 
	_delay_us(1); 
	LCD_Cmd_Port |= (1<<EN); /* Enable pulse ON */
	_delay_us(1); 
	LCD_Cmd_Port &= ~(1<<EN); /* Enable pulse OFF */ 
	_delay_ms(2); 
	}
	
/*LCD data write function */ 
void LCD_Char (unsigned char char_data){ 
	LCD_Data_Port = char_data; 
	LCD_Cmd_Port |= (1<<RS); /* RS=1 Data reg. */ 
	LCD_Cmd_Port &= ~(1<<RW); /* RW=0 write operation */ 
	_delay_us(1); 
	LCD_Cmd_Port |= (1<<EN); /* Enable Pulse ON */ 
	_delay_us(1); 
	LCD_Cmd_Port &= ~(1<<EN); /* Enable Pulse ON */ 
	_delay_ms(2); 
	}
	
/*LCD Initialize function */ 
void LCD_Init (void){ 
	LCD_Cmd_Dir = 0xFF; /* Make LCD command port direction as output pins*/ 
	LCD_Data_Dir = 0xFF; /* Make LCD data port direction as output pins*/ 
	_delay_ms(50); /* LCD Power ON delay always >15ms */ 
	LCD_Cmd(0x02); /* Return display to its home position */ 
	LCD_Cmd(0x38); /* Initialization of 16X2 LCD in 8bit mode */ 
	LCD_Cmd(0x0F); /* Display ON Cursor Blinking */ 
	LCD_Cmd(0x06); /* Auto Increment cursor */ 
	LCD_Cmd(0x01); /* Clear display */ 
	}
	
/*Clear LCD Function*/ 
void LCD_Clear(void){ 
	LCD_Cmd(0x01); /* clear display */ 
	LCD_Cmd(0x02); /* Return display to its home position */ 
	}
	
/*Send string to LCD function */ 
void LCD_String (char *str){ 
	int i; /* Send each char of string till the NULL */ 
	for(i=0;str[i]!=0;i++){ 
		LCD_Char(str[i]); 
		} 
		}