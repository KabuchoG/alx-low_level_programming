#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Description: prints times table
 *
 * Return: void
 */
void times_table(void)
{
int a, b, prod, tens, ones;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
prod = a * b;
tens = prod / 10;
ones = prod % 10;
if (b == 0)
{
_putchar('0');
}
else if (prod < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
