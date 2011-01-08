#include <stdio.h>
int main(int argc, const char *argv[])
{
    FILE *aa,*bb;
    char c;char a[1000];
    if(argc != 3)
    return 1;
    aa = fopen(argv[1],"r");
    bb = fopen(argv[2],"w");
    //size_t fread(void *ptr,size_t size,size_t nmemb,FILE *stream);
    //size_t fwrite(const void *ptr,size_t size,size_t nmemb,FILE *stream)
    while(1)
    {
    fread(a,1,1,aa);
    //if(c!=EOF)
    if(feof(aa))break;
    fwrite(a,1,1,bb);
    }
    return 0;
}
