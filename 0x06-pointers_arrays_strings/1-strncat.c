#include "main.h"
#include <string.h>
/**
 * strncat - appenda a string from source to destination but with a limit to the size of the destination
 * @dest: the updated string
 * @src: the string to append
 * Return:va pointer to the appended array string
 */
char *_strncat(char *dest, char *src, int n)
{
	n = (sizeof(dest) - strlen(dest) - 1);
	strncat(dest, src, n);
	return (dest);
}

