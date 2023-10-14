#include "main.h"
/**
 * _printf_char - prints a character
 * @c : character to be tested
 * @printed_chars : count printed characters
 */

void _printf_char(char c, int *printed_chars)
{
	_putchar(c);
	(*printed_chars)++;
}
