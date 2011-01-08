#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main(int argc, const char *argv[])
{
   int p; 
   p = add(200,400);
   printf("%d\n",p);
   p = sub(300,500);
   printf("%d\n",p);
    return 0;
}
