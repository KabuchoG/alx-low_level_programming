#include <stdio.h>
/**
 * main - print base 16 numbers
 *
 * retun: always 0 (success)
 */
int main(void)
{
	int num = '0';
	int let = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
	putchar(let);
	}
	putchar('\n');
	return (0);
}
