#pragma once
#include <stdint.h>

void vga_clear(void);
void vga_putc(char c);
void vga_print(const char *str);
void vga_set_color(uint8_t color);

