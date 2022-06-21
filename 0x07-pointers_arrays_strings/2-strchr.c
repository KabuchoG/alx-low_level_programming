#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string.
 * @c: the character
 * Return: s if c is found and Null if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (0);
}
