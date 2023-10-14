#include "main.h"
/**
 * _printf_string - prints a string
 * @str : string to be tested
 * @printed_chars : count printed characters
 */

void _printf_string(const char *str, int *printed_chars)
{
	const char *null;

	if (str == NULL)
	{
		null = "(null)";
		for (; *null; null++)
		{
			_putchar(*null);
			(*printed_chars)++;
		}
	}
	else
	{
		for (; *str != '\0'; str++)
		{
			_putchar(*str);
			(*printed_chars)++;
		}
	}
}
