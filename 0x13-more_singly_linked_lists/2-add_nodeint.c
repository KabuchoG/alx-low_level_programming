#include "lists.h"
/**
 * add_nodeint - adsd a node at the begining of the list
 * @head: pointer to the first node of the list
 * @n: valuse of the member in the node of the list
 * Return: returns a pointer to the adress if the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));

if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
