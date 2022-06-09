#include "main.h"
/**
 * more_numbers: prnts numbers 1 to 14
 * Description: iterates 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i ++)
	{
	for (j = 0; j <= 14; j++)
	{
	_putchar(j);
	}
	_putchar(i);
	_putchar('\n');
	}
}
