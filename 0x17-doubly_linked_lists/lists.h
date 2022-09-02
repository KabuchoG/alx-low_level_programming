#ifndef _LISTS_H_
#define _LISTS_H_
/**
 * stuct dlistint_s - doubly inked list
 * @n: value held
 * @prev: link to the previous node
 * @next: link to the next node
 *
 * Desctription: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s* prev;
	struct dlistint_s* next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);

#endif /* _LISTS_H_ */
