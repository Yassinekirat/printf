#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/*all prototypes*/
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
void rev_number(int num);
void _printf_number(int num);
void _printf_string(const char *str, int *printed_chars);
void _printf_char(char c, int *printed_chars);
void _printf_core(const char *format, va_list args, int *printed_chars);
void _printf_random(const char *format, int *printed_chars, int i);
void _printf_nopercent(const char *format, int *i, int *printed_chars);
void _printf_percent(int *printed_chars);


#endif /* MAIN_H */
