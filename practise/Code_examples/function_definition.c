#include <stdio.h>
int swap(int a,int b);
int goo(int d,int e,int f)
{
    f = d+e;
    d = f+e;
    return d;
}

int main(int argc, const char *argv[])
{
    int p;
    p =  goo(6,7,100);
    printf("%d\n",p);
    printf("%d\n",swap(3,4));
    return 0;
}
int swap(int a, int b)
{
    int t;
    t = a; a = b; b = t;
}
