#include <stdio.h>
#include <string.h>
char *mine(char *source, char* delim);

int main()
{
	char kabucho[64] = "beth. is, my. girl; and, i. love; her.";
		mine(kabucho, ",.;");
	return (0);
}
char *mine(char *source, char* delim)
{
int i = 0;

printf("%d", source[i]);
for (i = 0; i < strlen(source); i++)
{
if (source[i] == *delim)
	printf("\n%d", source[i + 1]);
}
return (source);
}
