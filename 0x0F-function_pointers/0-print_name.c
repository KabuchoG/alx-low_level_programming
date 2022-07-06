#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: array of strings
 * @f: pointer to a funtion
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
