#include "main.h"
/**
 * print_most_numbers - prints numbers less than 10 apart from 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	if (num != '2' || num != '4')
	{
	_putchar(num);
	}
	_putchar('\n');
	}
	return (0);
}
