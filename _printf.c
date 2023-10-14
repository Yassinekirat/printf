#include "main.h"
/**
 * _printf - my own mini printf function
 *
 * @format: format to be tested
 *
 * Return: printed characters
*/

int _printf(const char *format, ...)
{
	int printed_chars;
	va_list args;

	printed_chars = 0;
	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	_printf_core(format, args, &printed_chars);
	va_end(args);

	return (printed_chars);
}
