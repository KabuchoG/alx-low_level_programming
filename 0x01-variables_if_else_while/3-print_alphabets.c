#include <stdio.h>
/**
 * main - prints alphabets in lower and upper case
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char i = 'a';
	char I = 'A';
	
	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	while (I <= 'Z')
	{
	putchar(I);
	I++;
	}
	putchar('\n');
	return (0);
}
