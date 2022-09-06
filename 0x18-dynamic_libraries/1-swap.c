#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first integer
 * @b:second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
