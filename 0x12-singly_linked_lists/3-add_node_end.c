#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adsdss anode at the end of a list
 * @str: the string to be added to the new node
 * @head: pointer to a pointer to the first node
 * Return: adress of the new node which is of type list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *new = malloc(sizeof(list_t));
if (str == NULL)
	return (NULL);
if (new == NULL)
	return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
	free(new);
	return (NULL);
}
new->len = strlen(new->str);
new->next = NULL;
ptr = *head;
if (*head == NULL)
	*head = new;
else
{
while (ptr != NULL)
	ptr = ptr->next;
ptr->next = new;
return (new);
}
}
