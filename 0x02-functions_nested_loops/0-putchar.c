#include "main.h"
/**
 *
 * main- prints putchar and a new line
 * Reeturn: always 0 (success)
 */
int main(void)
{
	char n[9] = "_putchar";
	int i = 0;
	
	for (i = 0; i < 8; i++)
	{
	_putchar(n[i]);
	}
	_putchar('\n');

	return (0);
}
