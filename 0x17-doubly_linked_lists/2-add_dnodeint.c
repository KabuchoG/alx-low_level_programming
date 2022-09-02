#include "lists.h"
/**
 * add_dnodeint - add a node at the begining
 * @head: pointer to pointer to the first element
 * @n: the value
 * Return: The return value pointer to the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		return (NULL);
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
