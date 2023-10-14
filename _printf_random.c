#include "main.h"
/**
 * _printf_random - prints a unrecognisable character after %
 * @format : format to be tested
 * @i : integer to be tested
 * @printed_chars : count printed characters
 */

void _printf_random(const char *format, int *printed_chars, int i)
{
	_putchar('%');
	_putchar(format[i]);
	(*printed_chars) += 2;
}
