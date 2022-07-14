#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_listr - prints a list of elements in a struct list(linked)
 * @h: number of elements
 * Return: a value of type size_t
 */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	list_t *head = malloc(sizeof(list_t));
	head = &h;

	ptr = head;
	while (ptr != NULL)
	{
		ptr->len = strlen(ptr->str);
		if (ptr->str == NULL)
			printf("[%u] (nil)\n", ptr->len);
		else
		{
		printf("[%u] %s\n", ptr->len, ptr->str);
		}
			ptr = ptr->next;
	}
return (0);
}
