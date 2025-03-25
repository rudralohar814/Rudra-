#include <stdio.h>

#define MAX 15
struct stack
{
    int size;
    int top;
    int s[MAX];
};

void push(struct stack *st,int x)
{
    if(st->top == st->size-1)
        printf("stack overflow!!");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct stack *st)
{
    int x = -1;
    if(st->top == -1)
        printf("Stack underflow!!");
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack *st,int pos)
{
    int x = -1;
    if((st->top - pos + 1) < 0)
        printf("Invalid position!!!");
    else
        x = st->s[(st->top - pos + 1)];
    return x;
}

int stacktop(struct stack *st)
{
    if(st->top == -1)
        return -1;
    else
        return st->s[st->top];
}


void display(struct stack *st)
{
    int i;
    if(st->top == -1)
        printf("Stack underflow!!");
    printf("stack is as follow..\n");
    for(i=st->top;i>-1;i--)
    {
        printf("%d\n",st->s[i]);
    }
}
int main()
{
    struct stack st;
    st.size = MAX;
    st.top = -1;
    push(&st,12);
    push(&st,32);
    push(&st,42);
    push(&st,72);
    printf("popped value.. %d",pop(&st));
    display(&st);
    printf("Value at position 2 in %d.",peek(&st,2));
    return 0;
}
