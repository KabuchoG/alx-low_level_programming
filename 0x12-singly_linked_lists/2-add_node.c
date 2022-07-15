#include <string.h>
#include "lists.h"
/**
 * add_node - adds a node at the begining of a list
 * @head: a pointer to a pointer to the adress
 * of the first element of the list(first node)
 * @str: a string to be added in the new node
 * Return: a value of type list_t- address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
free(new);
return (NULL);
new->str = strdup(str);
new->len = strlen(new->str);
new->next = *head;
*head = new;
return (new);
}
