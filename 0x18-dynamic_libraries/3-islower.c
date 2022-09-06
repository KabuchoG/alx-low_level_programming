#include "main.h"
/**
 * _islower - retunrs 1 when c is lowercase else 0
 * @c: the variable
 *
 * Return: 1  when lower case and 0 othewise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
