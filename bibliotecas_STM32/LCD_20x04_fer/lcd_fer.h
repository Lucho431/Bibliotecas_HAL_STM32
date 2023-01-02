/*
===============================================================================
 Nombre      : lcd.h
 Autor	     : C�tedra T�cnicas Digitales II - UTN FRH
 Versi�n     : 2.0
 Fecha 		 : Junio 2014
 Descripci�n : Contiene la definici�n de constantes y prototipos de funciones
===============================================================================
*/
#ifndef LCD_H_
#define LCD_H_


#include "main.h"
#include "stdio.h"

	/* Puerto y pines a los que se conecta el display */
	#define LCD_PORT	GPIOA
	#define LCD_D4		D4_Pin
	#define LCD_D5 		D5_Pin
	#define LCD_D6 		D6_Pin
	#define LCD_D7 		D7_Pin
	#define LCD_RS 		RS_Pin
	#define LCD_EN 		EN_Pin

	/* C�digos hexadecimales de las instrucciones utilizadas */
	#define LCD_FUNCTION_SET_4BIT 0x28 // 0b00101000 -> DL=0, N=1, F=0
	#define LCD_DISPLAY_OFF       0x08 // 0b00001000 -> D=0, C=0, B=0
	#define LCD_DISPLAY_CLEAR     0x01 // 0b00000001
	#define LCD_ENTRY_MODE_SET    0x06 // 0b00000110 -> I/D=1, S=0
	#define LCD_DISPLAY_ON        0x0C // 0b00001100 -> D=1 , C=0, B=0

	#define LCD_DDRAM_ADDRESS	  0x80 // 0b10000000
	#define LCD_START_LINE1 	  0x00
	#define LCD_START_LINE2 	  0x40
	#define LCD_START_LINE3 	  0x14
	#define LCD_START_LINE4 	  0x54

	/* Prototipos de funciones */
	void LCD_Init(void);
	void LCD_SendNibble(uint8_t theNibble);
	void LCD_SendChar(char theChar);
	void LCD_SendInstruction(uint8_t theInstruction);
	void LCD_SendByte(uint8_t theByte);
	void LCD_GoToxy(uint8_t x, uint8_t y);
	void LCD_Print(char *p);
	void LCD_usDelay(uint32_t usec);
	void LCD_Tim1Init(void);
	void LCD_Tim1DeInit(void);

#endif /* LCD_H_ */
