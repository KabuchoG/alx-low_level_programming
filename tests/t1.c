#include <stdio.h>
#include <unistd.h>

int main ()
{
pid_t new_p, new_pp;

new_p = getpid();
new_pp = getppid();
printf("%u\n%u\n", new_p, new_pp);
return (0);
}
