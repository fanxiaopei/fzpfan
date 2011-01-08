#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void m(char **x)
{
    char *p = malloc(100);
    strcpy(p,"a b c");
    *x = p;
}
int main(int argc, const char *argv[])
{
    char *p = NULL;
    m(&p);
    printf("%s\n",p);
    return 0;
}
