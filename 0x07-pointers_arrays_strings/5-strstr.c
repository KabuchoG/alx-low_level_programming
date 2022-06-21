#include "main.h"

/**
 * _strstr - find the first occurence of a substring 
 * @haystack: the main string
 * @needle: pointer to the substring
 * Return:pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
int i;

while (*haystack != '\0')
{
while (*needle != '\0')
{
if (*haystack == *needle)
	return (haystack);
	needle++
}
	haystack++;
}
return (0);
}
