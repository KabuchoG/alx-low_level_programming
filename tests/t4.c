#include <stdio.h>
#include <unistd.h>
int main()
{
char path[] = "./t1";
char *argv[] = {"first", "echo my name is Kabucho", NULL};
char *envp[] = {NULL};
pid_t pid = getpid();
fork();
fork();
printf("%d\n", pid);
fork();
printf("%d\n", pid);
printf("<<<<<<<<<<<<Kabucho please call execve, wacha mchezo>>>>>>>>\n");
printf("%s\n", path);
execve(path, argv, envp);
		perror("could not execute execve\n");
printf("executed the original process but this means execv never executed\n");
return (0);
}
