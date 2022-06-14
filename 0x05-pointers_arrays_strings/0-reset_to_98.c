#include "main.h"
/**
 * reset_to_98 -resets a pointed value to 98
 * @n: the variable to reset a value
 * Retun: void
 */
void reset_to_98(int *n)
{
int p = 50;

n = &p;
*n = 98;
}
