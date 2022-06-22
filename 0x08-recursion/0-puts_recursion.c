#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the pointer to anincoming variable containing a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
_putchar(*s);
_putchar(_puts_recursion(*s++));
	}
_putchar('\n');
}
