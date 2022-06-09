#include "main.h"
/**
 * print_line - prints straight line on terminal
 * @n: the number of times - should be printed
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
	_putchar('_');
	n++;
	}
	_putchar('\n');
}
