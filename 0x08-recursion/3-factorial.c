#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: incoming number
 * Return: integer
 */
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
{
	return (1);
}
else
{
return (n * factorial(n - 1));
}
return (0);
}
