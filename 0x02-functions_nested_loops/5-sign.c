#include "main.h"
/**
 * print_sign - prints sign depending on the number
 * @n: the variable number
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	return (1);
	_putchar('+');
	}
	else if ((n = 0))
	{
	return (0);
	_putchar('0');
	}
	else
	{
	_putchar('-');
	}
	return (-1);
}
