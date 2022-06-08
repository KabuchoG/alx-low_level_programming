#include "main.h"
/**
 * print_times_table - prints the times table
 * @n: integer for times table
 * continues
 * Description: prints the times table
 * continues
 * Return: void
 */
void print_times_table(int n)
{
int i, j, prod;
if (n >= 0 && n < 15)
{
for (i = 0; i <= n; i++)
{ 
for (j = 0; j <= n; j++)
{
prod = i * j;
if (j == 0)
_putchar('0');
else if (prod < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(prod % 10 + '0');
}
else if (prod >= 10 && prod < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((prod / 10) % 10 + '0');
_putchar(prod % 10 + '0');
}
else if (prod > 99 && prod < 1000)
{
_putchar(',');
_putchar(' ');
_putchar(prod / 100 + '0');
_putchar((prod / 10) % 10 + '0');
_putchar(prod % 10 + '0');
}
}
_putchar('\n');
}
}
}
