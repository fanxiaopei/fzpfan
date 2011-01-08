#include <stdio.h>
#include <string.h>
struct stu
{
    char name[256];
    int chinese;
    int maths;
    int average;
};
int main(int argc, const char *argv[])
{
    struct stu stu1[] = {
    {"zhang",80,90,85},
    {"wang",80,90,85},
    {"li",80,90,85},
    {"zhao",80,90,85},
    {"chen",80,90,85}
    };
    FILE *fp;int i;
    fp = fopen("stu.txt","w");
    for(i=0;i<5;i++)
    {
    fprintf(fp,"%s %d %d %d\n",stu1[i].name,stu1[i].chinese,stu1[i].maths,stu1[i].average);
    }
    fclose(fp);
    return 0;
}
