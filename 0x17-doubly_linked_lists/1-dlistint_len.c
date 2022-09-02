#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to the first element
 *
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr = h;
	if (h == NULL)
		return (i);
	while (ptr != NULL)
	{
	ptr = ptr->next;
	i++;
	}
	return (i)
}
