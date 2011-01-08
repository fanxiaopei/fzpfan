#include <stdio.h>
typedef struct node *link
struct node
{
    char name[256];
    int id;
    int chinese;
    int maths;
    int average;
    link next;
};
link NODE(char name,int id,int chinese,int maths,int average,link next )     //定义一个结点为NODE的并且返回值为指针型的函数
{
    link t = malloc(sizeof *t);                     //定义一个指针“t”并将指针分配空间。
    t->id = id;                                       
    t->name = name;                                /*   给指针“t”赋初值。*/
    t->chinese = chinese;               
    t->maths = maths;           
    t->next = next;                                
    return t;                                     //返回指针 “t”。
}

int main(int argc, const char *argv[])
{
    
    return 0;
}
