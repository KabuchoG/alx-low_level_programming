#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char n;
	n = 'a';
	while (n <= 'z' ) 
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
