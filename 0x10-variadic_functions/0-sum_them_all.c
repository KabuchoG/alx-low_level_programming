#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all the arguments
 * @n: the first argument
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;
va_list pa;
va_start(pa, n);
if (n == 0)
	return (0);
else
{
for (i = 1; i <= n; i++)
{
sum += va_arg(pa, int);
}
return (sum);
}
return (0);
}
