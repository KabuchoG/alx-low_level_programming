#include "main.h"
/**
 * _isupper- dtermines if a letter is upper case
 * @c: the character
 *Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if ((c == 'A') && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
