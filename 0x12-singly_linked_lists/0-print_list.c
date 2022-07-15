#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_listr - prints a list of elements in a struct list(linked)
 * @h: number of elements
 * Return: a value of type size_t
 */
size_t print_list(const list_t *h)
{
const list_t *ptr;
unsigned int i = 0;

ptr = h;
while (ptr->next != NULL)
{
if (ptr)
printf("[%u] (nil)\n", ptr->len);
else
{
printf("[%u] %s\n", ptr->len, ptr->str);
}
ptr = ptr->next;
i++;
}
return (i);
}
