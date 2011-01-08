#include <stdio.h>
void myprintf(char  *format, ...)
{
    char  **p = &format;
    printf("%s\n",*++p);
    printf("%s\n",*++p);
    printf("%s\n",*++p);

}
int main(int argc, const char *argv[])
{
    myprintf("","how","are","you");
    return 0;
}
