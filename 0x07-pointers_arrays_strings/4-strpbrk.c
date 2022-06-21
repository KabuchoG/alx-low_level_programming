#include "main.h"
/**
 * _strpbrk - compares two strings.
 * @s: first string
 * @accept: second string.
 * Return: pointer to s.
 */
char *_strpbrk(char *s, char *accept)
{
int i;

for (i = 0; i != '\0'; i++)
{
	if (s[i] == accept[i])
	{
	return (s);
	}
}
return (0);
}
