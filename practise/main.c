#include <stdio.h>
int foo(int);
int main(int argc, const char *argv[])
{
    int a = foo(5);
    printf("%d\n",a);
    return 0;
}
