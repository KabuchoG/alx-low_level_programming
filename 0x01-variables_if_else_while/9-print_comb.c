#include <stdio.h>
/**
 * main -prints combinaations of all sing;e digit numbers
 *
 * Return: always 0 (guccess)
 */
int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++){
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
