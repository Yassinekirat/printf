#include "main.h"
/**
 * _printf_core - the core of my printf function
 * @format : format to be tested
 * @args : arguments to be tested
 * @printed_chars : count printed characters
 */
void _printf_core(const char *format, va_list args, int *printed_chars)
{
	int i, d;
	char c, *str;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_printf_nopercent(format, &i, printed_chars);
			continue;
		}
		i++;
		if (format[i] == '\0')
			break;
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			_printf_char(c, printed_chars);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			_printf_string(str, printed_chars);
		}
		else if (format[i] == 'd' || format[i] == 'i')
		{
			d = va_arg(args, int);
			_printf_number(d);
		}
		else if (format[i] == '%')
		{
			_printf_percent(printed_chars);
		}
		else
			_printf_random(format, printed_chars, i);
	}
}
