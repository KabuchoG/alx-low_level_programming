#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @seperator: string seperator
 * @n: number of arguments to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
va_list pa;

va_start(pa, n);
for (i = 0; i < n; i++)
{
if (va_arg(pa, char*) =='\0')
{
printf("nil");
}
else
{
printf("%s%s", va_arg(pa, char*) (*separator != '\0'));
}
}
va_end(pa);
printf("\n");
}
