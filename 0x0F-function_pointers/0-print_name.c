#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: araay of strings
 * @f: pointer to a funtion
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
int i;

for(i = 0; i != '\0'; i++)
{
_putchar(name[i]);
}
(void)f();
}
