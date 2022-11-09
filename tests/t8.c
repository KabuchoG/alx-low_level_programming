#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv, char **env)
{
	char name[] = "KABUCHO";
	extern char **environ;
	char *set = getenv("PATH");
	
		printf("USER>>>>:=%s\n", set);
		putenv("PASS=kjjbgakjbargkjrbg");

for (int i = 0; environ[i] != NULL; i++)
	printf("%s>>>>> \n%d \n>>> %s\n", name, i, environ[i]);
printf("PATH:>>>>>> %s\n", set);
return (0);
}
