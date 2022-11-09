#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void)
{
char com[] = "./command";
char *argv[] ={"com", "ptr2", "ptr3", NULL};
char *env[] = {NULL};
int child = fork();

if (child == 0)
{
fork();
fork();
fork();
}
	else
{
wait(&child);
}
if (execve(com, argv, env) == -1)
	perror("Error: Not eble to execute");
printf("did not execute exxecve");
return (0);
}


