#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <stddef.h>
/*
 * struct list_s - singly linked list
 * @str: - malloced string
 * @len: length of the string
 * @next: linl to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /*_LISTS_H_ */
