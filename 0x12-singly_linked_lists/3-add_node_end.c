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

if (new == NULL)
	return (NULL);
new->str = strdup(str);
new->len = strlen(new->str);
new->next = NULL;
if (*head == NULL)
	*head = new;
else
{
ptr = *head;
while (ptr)
	ptr = ptr->next;
ptr->next = new;
return (new);
}
}
