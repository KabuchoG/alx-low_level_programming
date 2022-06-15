#include "main.h"
#include <ctype.h>
/**
 * string_toupper - converts lower case elements of a string to upper case
 *
 * Return: a pointer to the first element of the string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; i < sizeof(n); i++)
{
	if (n[i] == 'a' || n[i] <= 'z')
		_putchar(toupper(n[i]));
}
return (n);
}
