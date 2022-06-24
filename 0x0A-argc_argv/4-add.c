#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - sums up two numbers
 * @argc: number of arguments passed
 * @argv: the string arrays
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
	if (isdigit(argv[i]))
	{
		sum += atoi(argv[i]);
	}
	else
	{
		printf("Error");
		return (1);
	}
	}
	printf("%d\n", sum);
	return (0);
}
