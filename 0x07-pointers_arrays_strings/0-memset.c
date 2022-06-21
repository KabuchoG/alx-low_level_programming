#include "main.h"
/**
 * _memset - sets a value to a memory byte.
 * @s: points to char parameters.
 * @b: the value.
 * @n: the sze or index of the array.
 * Return: pointer to char(s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; 1 < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
