#include "main.h"
/**
 * reverse_array - prints the elements of an array in reverse
 * @a: the array
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;

	n = sizeof(a);
	for (i = (n - 1); i >= 0; i--)
	{
	_putchar(a[i]);
	}

}
