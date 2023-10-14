#include "main.h"
/**
 * rev_number - print number in reverse
 * @num: number to be tested
*/
void rev_number(int num)
{
	if (num == 0)
	{
		return;
	}
	rev_number(num / 10);
	_putchar(num % 10 + '0');
}
