#include <stdio.h>
/**
 * main - prints fibonnaci
 *
 * Return: 0 success
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i<= 50; ++i)
	{
	if (j != 20365011074)
	{
	printf("%ld, ", j);
	}
	else
	{
	printf("%ld\n", j );
	}
	next = k + j;
	j = k;
	k = next;
	}
	return(0);
}
