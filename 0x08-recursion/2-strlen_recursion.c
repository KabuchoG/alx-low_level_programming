#include "main.h"
/**
 * _strlen_recursion - prints the lenght of a string
 * @s: the string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (s[i] != '\0')
{
_strlen_recursion(i + 1);
return (i + 1);
}
return (0);
}
