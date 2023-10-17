#include "main.h"
/**
 * _printf_numbers - prints numbers
 * @num: number to be tested
 * @printed_chars : count printed characters
*/
void _printf_numbers(int num, int *printed_chars)
{
	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		(*printed_chars) += 2;
		_printf_numbers(147483648, printed_chars);
	}
	else if (num < 0)
	{
		_putchar('-');
		(*printed_chars)++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		(*printed_chars)++;
	}
	if (num > 0)
	{
		rev_number(num, printed_chars);
	}
}
