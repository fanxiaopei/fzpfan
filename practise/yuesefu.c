#include <stdio.h>
struct node
{
    int item;
    struct node * next;
};
typedef struct node * link;
link make(int item , link n)
{
    link p;
    p = malloc(sizeof(struct node));
    p->item = item;
    p->next = n;
    return p;
}
void travel_loop(link head, int n)
{
    link p = head;
    int i = 0;
    while(1)
    {
        printf("%d\n",p->item);
        p = p->next;
        i++;
        (i == n)
        break;
    }
}
int main(int argc, const char *argv[])
{
    link head,p,q;
    int i;
    head = p =make(1,NULL);
    p->next = p;
    return 0;
}
