#include "main.h"
/**
 * largest_number - returns the largets of the three numbers
 * @a: first number
 * @b: the second number
 * @: the third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > a && b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}
	return (largest);
}
