#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
int child;
pid_t pid = getpid();

child = fork();
/**
 * child
 */
if (child == -1)
	perror("Error:");
if (child == 0)
{
printf("\t\t\t\tI am your son with PID:%d\nn", pid);
printf("Am done Dad");
}
else
{
printf("I am your Fther with PID:%d\n", pid);
wait(&child);
printf("am happy you are done son");
}
	return(0);
}
