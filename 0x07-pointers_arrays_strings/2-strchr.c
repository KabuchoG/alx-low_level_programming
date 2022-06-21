#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string.
 * @c: the character
 * Return: s if c is found and Null if not
 */
char *_strchr(char *s, char c)
{
	int i;
	for (;i != '\0'; i++)
	{
	if (s[i] == c)
	{
	return (s);
	}
	}
	return (0);
}
