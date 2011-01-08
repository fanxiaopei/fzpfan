#include <stdio.h>
#include <stdarg.h>
int add_t(int num,...)
{
    int result = 0, i;
    va_list ap;
    va_start(ap,num);
    for(i = 0;i < num;i++)
    {
        result +=va_arg(ap,int);
    }
    va_end(ap);
    return result;
}
int main(int argc, const char *argv[])
{
    printf("%d\n",add_t(10,1,3,5,7,9,2,4,6,8,0));
    return 0;
}
