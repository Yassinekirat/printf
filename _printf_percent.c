#include "main.h"
/**
 * _printf_nopercent - prints the characters as long as there is no %
 * @format : format to be tested
 * @i : integer to be tested
 * @printed_chars : count printed characters
 */

void _printf_nopercent(const char *format, int *i, int *printed_chars)
{
	_putchar(format[(*i)]);
	(*printed_chars)++;
}

/**
 * _printf_percent - prints percent
 *
 * @printed_chars : count printed characters
 */

void _printf_percent(int *printed_chars)
{
	_putchar('%');
	(*printed_chars)++;
}
