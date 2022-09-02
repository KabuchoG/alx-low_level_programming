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
	while (h->next != NULL)
	{
		printf("%d", h->n);
		h->next;
		i++;
	}
	return (i);
}
