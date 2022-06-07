#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -prints numbers to 98
 * @n the strat of integer
 *
 * Descripion: prints all the natural numbers from the n
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
{
	while (n < 98)
	{
	printf("%d, ", n);
	n++;
	}
}
	else if (n > 98)
	{
	while (n > 98)
	{
	printf("%d, ", n);
	n--;
	}
	}
	printf("98\n");
}
