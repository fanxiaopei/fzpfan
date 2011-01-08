#include <stdio.h>
#include <stdarg.h>
int mul_t(int num,...)
{
    int result = 1,i;
    va_list ap;
    va_start(ap,num);
    for(i = 0;i < num;i++)
    {
         result *=va_arg(ap,int);
    }     
    va_end(ap);
    return result;
}
int main(int argc, const char *argv[])
{
    printf("%d\n",mul_t(10,1,2,3,4,5,6,7,8,9,10));
    return 0;
}
