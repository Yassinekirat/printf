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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
	{
		return (-1);
	}

	va_start(args, format);
	_printf_core(format, args, &printed_chars);
	va_end(args);

	return (printed_chars);
}
