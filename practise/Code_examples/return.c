#include <stdio.h>

int foo(void)
{
    return 5;
}
int main(int argc, const char *argv[])
{
    int a;
    a = foo();
    printf("%d\n",a);
    return 0;
}
