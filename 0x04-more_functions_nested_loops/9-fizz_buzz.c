#include <stdio.h>
/**
 * main -prints all numbers from 1 to 100 but replacess others with words
 *
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("FizzBuzz ");
	}
	if (!((i % 3 == 0 && i % 5 == 0) || (i % 3 == 0) || (i % 5 == 0)))
	printf("%d ", i);
	}
	printf("\n");
	return (0);
}
