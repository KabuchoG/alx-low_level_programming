#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to the first node(head node)
 * Return: size t value
 */
size_t list_len(const list_t *h)
{
const list_t *ptr;
unsigned int i;

ptr = h;
for (i = 0; ptr; i++)
	ptr = ptr->next;
return (i);
}
