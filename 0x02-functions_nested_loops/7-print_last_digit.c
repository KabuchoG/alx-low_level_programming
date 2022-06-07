#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 *
 * Return; sucess 0
 */
int print_last_digit(int lastd)
{
	int n;

	lastd = n % 10;
	_putchar(lastd);
	return (n % 10);
}
