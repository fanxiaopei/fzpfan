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
    link next;
};
/*link NODE(char *name,int id,int chinese,int maths,int average,link next)   
{                                                //定义结点函数
    link t = malloc(sizeof *t);
    strcpy(t->name,name);
    t->id = id;
    t->chinese;
    t->maths = maths;
    t->next = next;
    return t;
}*/
link creat(link p)                         //创建链表。
{
    link k = malloc(sizeof *k);
    p->next = k;
    k->next = NULL;
    return k;
}
link my_fopen()                            //打开文件。
{
    FILE *aa;link bb;
    aa =fopen("b.txt","r");
    link head = malloc(sizeof(struct node));
    link kk = malloc(sizeof(struct node));
    bb = head;
        fscanf(aa,"%s %d %d %d %d",bb->name,&bb->id,&bb->chinese,&bb->maths,&bb->average);
    while(1)
    {
        fscanf(aa,"%s %d %d %d %d",kk->name,&kk->id,&kk->chinese,&kk->maths,&kk->average);
        if(fgetc(aa) == EOF)               //先判断文件是否读到空，然后在创建链表，
        break;                             //最后在赋值。  
        bb = creat (bb);
        *bb = *kk;
    }
    fclose(aa);
    return head;
}
void print_t(link head)                    
{
    while(head != NULL)
    {
        printf("%s %d %d %d %d\n",head->name,head->id,head->chinese,head->maths,head->average);
        head = head->next;
    }
}
void insert(link head)
{
    link d = malloc(sizeof(struct node));
    while(1)
    {
        head = head->next;
        if(head->next == NULL)
        {
            head->next = d;
            d->next = NULL;
            scanf("%s %d %d %d %d",d->name,&d->id,&d->chinese,&d->maths,&d->average);
            break;
        }
    }
}
link delete(link head)
{   
    link q,p;int id;
    p = head;
    q = head->next;
    scanf("%d",&id);
    if(head->id == id)
    {
        head = head->next;
        return head;
    }
    while(1)
    {   
        if(q->id == id)
        {
            p->next = q->next;
            break;
        }
        p = p->next;
        q = p->next;
        //head->next = head;
        //q->next = p->next->next;
    }
    return head;
}
link sort_t(link head)
{
/*    link p,q,m;int average;
    p = head;
    p->next = q;
    p = p->next;
    scanf("%d %d %d",&average,&average,&average);
    while(1)
    {
    if(p->average > q->average)
    break;
    else if(p->average < q->average)
    {
        m = p;p = q;q = m;
    }
    break;
    }
    return head;*/
    link q,t,ht;
    t = head;
    q = t->next;
    t->next = NULL;
    head = t;
    t = q;
    while(t != NULL)
    {
        q = t->next;
        t->next = NULL;
        ht = head;
        while(ht->next != NULL)
        ht = ht->next;
        if(t->average >= head->average)
        {
            t->next = head;
            head = t;
        }
        else if(t->average < ht->average)
        {
            ht->next = t;
        }
        else 
        {
            ht = head;
            while(ht->next->average > t->average)
            ht = ht->next;
            t->next = ht->next;
            ht->next = t;
        }
        t = q;
    }
    return head;
 }
int main(int argc, const char *argv[])
{  
    char ch;int num;
    link p = my_fopen();
    //print_t(p);
   /* start:
    insert(p);
    print_t(p); 
    p = delete(p);
    print_t(p);
    goto start;
    */
    printf("menu:\n1.display all students' info\n2.sort by average\n3.Insert a new info\n4.Delete a record\n5.Quit\n");
re:    printf("Please input your choice:");
    ch = getchar();
    if(ch == '\n')
    goto re;
    else
    getchar();
    switch(ch)
    {
        case '1': printf("%s\n","display all students' info");
                  print_t(p);
                  break;
        case '2': printf("%s\n","sort by average");
                  print_t(p);
                  printf("\n");
                  p = sort_t(p);
                  print_t(p);
                  break;
        case '3': printf("%s\n","Insert a new info");
                  print_t(p);
                  insert(p);
                  printf("\n");
                  print_t(p);
                  break;
        case '4': printf("%s\n","Delete a record");
                  print_t(p);
                  p = delete(p);
                  print_t(p);
                  break;
        case '5': printf("%s\n","Quit");
                  break;
    }
    return 0;
}
