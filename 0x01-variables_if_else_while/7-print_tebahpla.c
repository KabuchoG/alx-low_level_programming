#include <stdio.h>
/**
 * main - prints alphabets inreverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char i = 'z';

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');

		return (0);
}
