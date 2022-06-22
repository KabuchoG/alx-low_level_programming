#include "main.h"
/**
 * _strlen_recursion - prints the lenght of a string
 * @s: the string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
_strlen_resursion(s + 1);
return (s);
}
}
