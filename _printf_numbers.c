#include "main.h"
/**
 * _printf_numbers - prints numbers
 * @num: number to be tested
*/
void _printf_numbers(int num)
{
	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		_printf_numbers(147483648);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
	}
	if (num > 0)
	{
		rev_number(num);
	}
}
