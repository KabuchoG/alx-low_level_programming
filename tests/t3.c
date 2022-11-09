#include <stdio.h>
#include <string.h>
int main()
{
char kabucho[64] = "george. kamau. kabcho. is. a. great. guy";
int i = 0;
char *output = strtok(kabucho, ".");
printf("%s\n", output);
while (output != NULL)
{
output = strtok(NULL, ".");
printf("%d[%p] >>>> %s\n", i,output,output);
i++;
}
return (0);
}
