#include "lists.h"
/**
 * add_nodeint_end - adds anode at the end of the list
 * @head: pointer to the first element of a list
 * @n: value of the member od the new node
 * Return: adress of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = *head;
listint_t *new = malloc(sizeof(listint_t));

if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
return (new);
}
