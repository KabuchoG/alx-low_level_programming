#include "main.h"
/** print_alphabet_x10 - prints alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j = 'a';
	
	for (i = j; i <= 10; i++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar(i);
	_putchar('\n');
}
}
