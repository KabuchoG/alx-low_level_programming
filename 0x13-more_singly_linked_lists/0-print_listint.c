#include "lists.h"
/**
 * print_listint - prints all the elements of a list 
 * @h: pointer to the first element of a list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
const listint_t *ptr = h;
int i = 0;

while (ptr)
{
	printf("%d\n", ptr->n);
	ptr = ptr->next;
	i++;
}
return (i);
}
