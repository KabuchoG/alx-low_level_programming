#include "main.h"
/**
 * _isdigit- determines whether c is a digit
 * @c: the variable
 * Return: returns 1 if c is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c == 0 && c < 10)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}