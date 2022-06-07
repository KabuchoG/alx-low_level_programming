#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	putchar(alp);
	}
	putchar('\n');
}
