#include <stdio.h>
#include <stdlib.h>
#include "m.h"
char *_getenv(const char *name);

char *_getenv(const char *name)
{
	int i;
	extern char **environ;

	for (i =0; environ[i] != NULL; i++)
	{
	if (environ[i] == name)
	{
		printf("NAME:>>>>%s\n", name);
	}
	}
return (NULL);
}

