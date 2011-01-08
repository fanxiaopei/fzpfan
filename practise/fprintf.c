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
    struct stu stu1[] =
    {    
        {"zhang",90,80,85}, 
        {"song",90,80,85},
        {"zhao",90,80,85}, 
        {"wang",90,80,85}, 
        {"li",90,80,85} 
    };
    struct stu stu2[5];
    FILE *fp;int i;
    fp = fopen("stu.txt","w");
        //fscanf(fp,"%s %d %d %d"name,&chinese,&maths,&average);
    for(i = 0;i<5 ; i++)
        fprintf(fp,"%s %d %d %d\n",stu1[i].name,stu1[i].chinese,stu1[i].maths,stu1[i].average);    
    fclose(fp);
    fp = fopen("stu.txt","r");
    for(i = 0;i<5;i++)
    {
    fscanf(fp,"%s %d %d %d",stu2[i].name,&stu2[i].chinese,&stu2[i].maths,&stu2[i].average);
    fprintf(stdout,"%s %d %d %d\n",stu2[i].name,stu2[i].chinese,stu2[i].maths,stu2[i].average);    
    }
    fclose(fp);
    return 0;
}
