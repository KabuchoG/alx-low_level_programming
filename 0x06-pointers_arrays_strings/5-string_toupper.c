#include "main"
/**
 * string_toupper - converts lower case elements of a string to upper case
 *
 * Return: a pointer to the first element of the string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i != '\0'))
{
	if ((*(n + i) >= 97) && (*(n + i) <= 122))
	*(n + i) = *(n + i) - 32;
	i++;
}
return (n);
}
