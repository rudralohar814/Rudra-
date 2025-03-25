#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first = NULL;

struct node *create(int n)
{
    int i,value;
    struct node *A;

    if(n<=0)
    {
        printf("Increase node size...");
        return -1;
    }

    printf("\nEnter value of 1 node:- ");
    scanf("%d",&value);
    first = (struct node *)malloc(sizeof(struct node));
    first->data = value;
    first->next = NULL;

    struct node *B=first;
    for( i=2; i<=n; i++ )
    {
        printf("\nEnter value of %d node:- ",i);
        scanf("%d",&value);
        A = (struct node *)malloc(sizeof(struct node));
        A->data = value;
        A->next = NULL;

        B->next = A;
        B=A;
    }
    return first;
}

struct node *search(struct node *A,int x)
{
    while(A!=NULL)
    {
        if(A->data == x)
            return (A);
    }
    A=A->next;
}
void display(struct node *A)
{
    if (A==NULL)
    {
        printf("list is empty..");
        return -1;
    }
    printf("\nLinked list are..\n");
    while(A!=NULL)
    {
        printf("%d\n",A->data);
        A=A->next;
    }
}

int main()
{

    int n;
    printf("Enter how many node you want to create..\n");
    scanf("%d",&n);


    first = create(n);
    display(first);
    printf("abc %d",search(first,12));
    return 0;
}
