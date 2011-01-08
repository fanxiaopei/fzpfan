#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node *link;
struct  node
{
    char name[256];
    int id;
    int chinese;
    int maths;
    int average;
    struct node * next;
};
link NODE(char *name,int id,int chinese,int maths,int average,link next)
{
    link t = malloc(sizeof *t);
    strcpy(t->name,name);
    t->id = id;
    t->chinese;
    t->maths = maths;
    t->next = next;
    return t;
}
link creat(link p)
{
    link k = malloc(sizeof *k);
    p->next = k;
    k->next = NULL;
    return k;
}
link my_fopen()
{
    FILE *aa;link bb;
    aa =fopen("b.txt","r");
    link head = malloc(sizeof(struct node));
    bb = head;
    while(1)
    {
        fscanf(aa,"%s %d %d %d %d",bb->name,&bb->id,&bb->chinese,&bb->maths,&bb->average);
        if(feof(aa))
            break;
        bb = creat (bb);
    }
    fclose(aa);
    return head;
}
link print_t(link head)
{
    while(head->next != NULL)
    {
        printf("%s %d %d %d %d\n",head->name,head->id,head->chinese,head->maths,head->average);
        head = head->next;
    }
    return head;
}
void insert(link head)
{
    struct node *d = malloc(sizeof(struct node));
    scanf("%s %d %d %d %d",d->name,&d->id,&d->chinese,&d->maths,&d->average);
    //d->next = head->next;
    //head->next = d;
    while(head->next)
    {
        head = head->next;
    }
    head->next = d;
    d->next = NULL;
}
int main(int argc, const char *argv[])
{   
    link head = my_fopen();
    link tail;
    tail = print_t(head);
    insert(head);
    print_t(head);
    return 0;
}
