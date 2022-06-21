#include "main.h"
/**
 * @s: point to char parameters
 * @b: the value
 * @n: the sze or index of the array
 * Return: pointer to char(s)
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
