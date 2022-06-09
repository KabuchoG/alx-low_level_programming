#include <stdio.h>
/**
 * print_line - prints straight line on terminal
 * @n: the number of times - should be printed
 * Return: void
 */
int main(int n)
{
	while (n > 0)
	{
	putchar('_');
	n++;
	}
	putchar('\n');
return (0);
}
