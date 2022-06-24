#include "main.h"
/**
 * print_numbers - prints nu,bers from 0 to 9
 * Description: void means it is returning nothing
 * Return: void
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	_putchar(num);
	}
	_putchar('\n');
}
