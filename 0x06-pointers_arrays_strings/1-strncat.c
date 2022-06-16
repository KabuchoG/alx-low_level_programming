#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int cycle = 0, cycle2 = 0;

	while (*(dest + cycle) != '\0')
	{
		cycle++;
	}

	while (cycle2 < n)
	{
		*(dest + cycle) = *(src + cycle2);
		if (*(src + cycle2) == '\0')
			break;
		cycle++;
		cycle2++;
	}
	return (dest);
}
