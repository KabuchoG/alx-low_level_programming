#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the charater variable
 *
 * Return: 1 when upper case or lowercase and 0 when else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else 
	{
	return (0);
	}
}
