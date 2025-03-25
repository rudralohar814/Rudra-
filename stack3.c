#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top = NULL;

void push(int x)
{
    struct node *st;
    st = (struct node *)malloc(sizeof(struct node));
    if ( st == NULL)
        printf("Stack memory does't allocated..");
    else
    {
        st->data = x;
        st->next = top;
        top = st;
    }
}

int pop()
{
    struct node *p;
    int x = -1;
    if(top == NULL)
        printf("stack is empty..");
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;
}

int peek(int pos)
{
    int x,i;
    x = -1;

    struct node *p=top;
    for(i=0;i < (pos-1);i++)
    {
        p=p->next;
    }
    if(p!=NULL)
        x = p->data;
    return x;
}

void display()
{
    struct node *p=top;
    while(p!=NULL)
    {
        printf("%d \n", p->data);
        p=p->next;
    }
}
int main ()
{
    struct node st;
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    printf("popped value is %d..\n",pop());
    display();
    printf("peeked value at 2 is %d..",peek(2));
    return 0;
}
