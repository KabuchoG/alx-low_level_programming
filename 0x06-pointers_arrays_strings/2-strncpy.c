#include "main.h"
#include <string.h>
/**
 * strncpy - copies a string 
 * @dest: is the destination where the string will be copied
 * @src: contains the string to copy
 * Return; s pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
n = sizeof(dest);
strncpy(dest, src, n);
dest[sizeof(dest)- 1] = '\0';
return (dest);
}
