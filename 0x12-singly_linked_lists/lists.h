#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <stddef.h>
/*
 * struct list_s - singly linked lists
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
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif /*_LISTS_H_ */
