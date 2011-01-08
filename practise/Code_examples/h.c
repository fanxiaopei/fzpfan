#include <stdio.h>

unsigned int adda = 1;
unsigned int addb = 2;
//int add(int a,int b)
int main(int argc, const char *argv[])
{
    //int aa = 1;
    //int bb = 1;
    static int sta_a = 1;
    printf("<add.c> address static a = 0x%p\n",&sta_a);
    return 0;
}
