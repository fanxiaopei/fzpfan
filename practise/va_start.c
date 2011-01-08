#include <stdio.h>
#include <stdarg.h>
void myprintf(char * format,...)
{
    char *p;
    va_list ap;
    va_start(ap,format);
    p = va_arg(ap,char *);
    printf("%s\n",p);
    p = va_arg(ap,char *);
    printf("%s\n",p);
    p = va_arg(ap,char *);
    printf("%s\n",p);
    va_end(ap);
}
int main(int argc, const char *argv[])
{
    myprintf("","how","are","you");
    return 0;
}
