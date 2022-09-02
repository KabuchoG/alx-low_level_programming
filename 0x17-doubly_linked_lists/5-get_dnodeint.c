#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at a given index
 * @head: pointer to the first element of a doubly linked list
 * @index: position
 * Return: returns the adress of the node at index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (h != NULL)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
