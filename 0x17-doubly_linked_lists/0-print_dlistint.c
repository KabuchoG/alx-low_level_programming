#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to the first node
 *
 * Return: a size_t value
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr = h;
	if (h == NULL)
		return (i);
	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
