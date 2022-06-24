#include <stdio.h>
/**
 * main - prints the urguments.
 * @argc: the number of urguments passed.
 * @argv: the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
