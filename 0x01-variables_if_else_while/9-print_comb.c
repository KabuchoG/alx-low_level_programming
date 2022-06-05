#include <stdio.h>
/**
 * main -prints combinaations of all sing;e digit numbers
 *
 * Return: always 0 (guccess)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9);
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
