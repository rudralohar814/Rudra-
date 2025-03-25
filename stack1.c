#include <stdio.h>

#define MAX 15
int stack[MAX];
int top = -1;

void push(int arr[],int val)
{
    if(top == MAX-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        arr[top] = val;
    }
}

int pop(int arr[])
{
    int x;
    if(top == -1)
    {
        printf("stack underflow..");
    }
    else
    {
        x = arr[top];
        top--;
        return x;
    }
}

void display(int arr[])
{
    if(top == -1)
    {
        printf("stack is empty..");
    }
    else
    {
        int i;\
        printf("stack is as follow..\n");
        for (i = top; i>-1; i--)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int main ()
{

    push(stack,10);
    push(stack,12);
    push(stack,14);
    display(stack);

    int x;
    x = pop(stack);
    printf("pop element is:- %d\n",x);
    display(stack);

    return 0;
}
