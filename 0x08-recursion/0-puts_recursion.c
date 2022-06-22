#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the pointer to anincoming variable containing a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
_putchar(*s);
_puts_recursion(s + 1);
	}
_putchar('\n');
}
