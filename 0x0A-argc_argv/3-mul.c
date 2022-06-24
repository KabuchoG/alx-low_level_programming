#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the peoduct of two numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int product_of;

	if (argc == 3)
	{
	product_of = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product_of);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
