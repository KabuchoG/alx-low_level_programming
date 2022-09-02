#include "lists.h"
/**
 * add_dnodeint_end - add a node ad the end
 * @head: pointert to a pointer to the first element
 * @n: the integer value
 * Return: return a pointer to the address of the inserted node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	h = *head;
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (h == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	new->prev = h;
	h = new;
	return (h);
}
