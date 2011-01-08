#include <stdio.h>

int main(int argc, const char *argv[])
{
    char *p;
    int a,b,c;
    a = 1;
    b = 5;
    c = 8;
    printf("%d\n",sizeof(++b));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof p);
    printf("%d\n",sizeof *p);
    printf("%u\n",0xFFFFFFFF);
    printf("%u\n",-1);
    printf("%u\n",-1);
    return 0;
}
