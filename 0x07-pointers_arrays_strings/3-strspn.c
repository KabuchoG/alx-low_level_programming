#include "main.h"
/**
 * _strspn - counts the length of a prefix 
 * @s: the main atring
 * @accept: the substring
 * Return: lenth
 */
unsigned int _strspn(char *s, char *accept);
{
int i;

while (*s != '\0')
{
while (*accept != '\0')
{
if (*s == *accept)
	break;
	i++;
	accept++;
	s++;
}
if (*accept == '\0')
break;
}
return (i + 1);
}
