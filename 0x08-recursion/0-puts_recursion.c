#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the pointer to anincoming variable containing a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
_putchar(s[i]);
	}
_putchar('\n');
}
