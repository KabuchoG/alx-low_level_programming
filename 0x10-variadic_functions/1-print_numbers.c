#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all the numbers
 * @seperator: string seperating the numbers
 * @n: number of ints to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list pa;

	va_start(pa, n);
	for (i= 0; i < n; i++)
	{
		printf("%d%s ", va_arg(pa, int) !(*seperator == NULL));
	}
	va_end(pa);
	printf("\n");
}
