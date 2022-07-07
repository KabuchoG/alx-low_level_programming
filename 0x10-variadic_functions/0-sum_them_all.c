#include "variadic_functions.h"
/**
 * sum_them_all - sums up all the arguments
 * @n: the first argument
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;

va_list pa;
if (n == 0)
	return (0);
va_start(pa, n);
for (i = 1; i <= n; i++)
{
sum += va_arg(pa, int);
}
va_end(pa);
return (sum);
}
