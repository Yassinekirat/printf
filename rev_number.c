#include "main.h"
/**
 * rev_number - print number in reverse
 * @num: number to be tested
 * @printed_chars : count printed characters
*/
void rev_number(int num, int *printed_chars)
{
	if (num == 0)
	{
		return;
	}
	rev_number(num / 10, printed_chars);
	_putchar(num % 10 + '0');
	(*printed_chars)++;
}
