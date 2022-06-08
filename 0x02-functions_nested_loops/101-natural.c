#include <stdio.h>
/**
 * main - prints the the sum of all mltiples if 3 and 5 below 1024
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long int sum3, sum5, sumtotal;

	sum3 = 0;
	sum5 = 0;
	sumtotal = 0;
	for (i = 0; i < 1024; ++i)
	{
	if ((i % 3 ) == 0)
	{
	sum3 = sum3 + i;
	}
	else if ((i % 5) == 0)
	{
	sum5 = sum5 + i;
	}
	}
	sumtotal = sum3 + sum5;
	printf("%lu\n", sumtotal);
	return (0);
}
