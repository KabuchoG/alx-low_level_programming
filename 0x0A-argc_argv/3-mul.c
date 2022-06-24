#include <stdio.h>
int atoi(char *str);
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
/**
 * atoi - converts a string to an integer
 * @str: string
 * Return: integer.
 */
int atoi(char *str)
{
int res = 0;

for (int i = 0; str[i] != '\0'; ++i)
{
	if (str[i] > '9' || str[i] < '0')
	return (-1);
	res = res * 10 + str[i] - '0';
}
return (res);
}
