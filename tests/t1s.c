#include <stdio.h>
#include <stdlib.h>
int main(const char *name)
{
	int i;
	extern char **environ;

	for (i =0; environ[i] != NULL; i++)
	{
	if (environ[i] == name)
		printf("NAME:>>>>%s\n", name);
	}
return (0);
}

