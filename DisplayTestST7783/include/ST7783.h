
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ST7783_H
#define __ST7783_H

#include <stdint.h>

#define	BLACK   0x0000
#define	BLUE    0x001F
#define	RED     0xF800
#define	GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define LIGHTGRAY 0xCDB6

void LCD_Reset(void);
void LCD_Begin(void);
void LCD_Write8(uint8_t data);
void LCD_WriteRegister8(uint8_t a, uint8_t d);
void LCD_WriteRegister16(uint16_t a, uint16_t d);
void LCD_SetAddrWindow(int x1, int y1, int x2, int y2);
void LCD_Flood(uint16_t color, uint32_t len);
void LCD_FillScreen(uint16_t color);
void LCD_DrawFastHLine(int16_t x, int16_t y, int16_t length, uint16_t color);

#endif /* __ST7783_H */