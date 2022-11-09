#include <stdio.h>
#include "m.h"
int main()
{
char *path = "TERM=xterm";
_getenv(path);
return (0);

}
