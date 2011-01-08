#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
typedef struct node *link;
struct node
{
    int item;
    link next;
};
link NODE(int item,link next)
{
    link t = malloc(sizeof *t);
    t->item = item;
    t->next = next;
    return t;
}
void show_list(link head)
{
    link t;
    for(t=head;t!=NULL;t=t->next)
    printf("%3d\n",t->item);
    printf("\n");
}
link get_max(link head)
{
    link t,p;
    link pre = head;
    link max = head->next;
    for(t=head,p=t;t;p=t,t=t->next)
    {
        if(t->item<=max->item)continue;
        max = t;
        pre = p;
    }
    pre->next = max->next;
    return max;
}
int main(int argc, const char *argv[])
{
    int i;
    link h = NULL;
    link head = NULL;
    srand(time(NULL));
    for(i=0;i<N;i++)
    head = NODE(rand()%100,head);
    show_list(head);
    head = NODE(-1,head);
    while(head->next!=NULL)
    {
        link t = get_max(head);
        t->next = h;
        h = t;
    }
    free(head);
    head = h;
    show_list(head);
    return 0;
}
