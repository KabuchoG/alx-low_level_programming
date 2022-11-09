#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char cmd[] = "./script";
	char *argv[] = {"cmd", "ls", "-l", "-a", "echo good kabucho", NULL};
	char *env[] = {NULL};
	int i;

	for (i = 0; 1 < 700; i++)
	{
	printf("<<<<<<<<<<<<<<<<before execve>>>>>>>>>>>>.\n");
	if (execve(cmd, argv, env) == -1)
	{
	perror("Error");
	}
	printf("How did you get here?\n");
	}
	return(0);
}
