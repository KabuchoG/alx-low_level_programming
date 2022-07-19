#include "lists.h"
/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the adress of the first element os the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
const listint_t *ptr = h;
int i;

i = 0;
while (ptr != NULL)
{
ptr = ptr->next;
i++;
}
return (i);
}
