#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes a string
 * @c: the string array
 * Return: char pointer
 */
char *cap_string(char *c)
{
int i;

	for ( i = 0; i <= sizeof(c); i++)
	{
	if (c[i] == (' ' || '\n' || '\t' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}'))
	{
	_putchar(topper(c[i + 1]));
	}
	else
	{
	_putchar(c[i]);
	}
	}
	_putchar('\n');
	return (c);

}
