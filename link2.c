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
struct node *dltB(struct node *A)
{
    if(A==NULL)
    {
        printf("list is already empty..");
    }
    struct node *B=A;
    A = A->next;
    free(B);

    return A;
}

void dltM(struct node *A,int x)
{
    if(A==NULL)
    {
        printf("list is already empty..");
    }
    struct node *B = A;
    struct node *C = NULL;
    for(int i = 0; i < x-1; i++)
    {
        C=B;
        B=B->next;
    }
    C->next = B->next;
    free(B);
}

void dltE(struct node *A)
{
    if(A==NULL)
    {
        printf("list is already empty..");
    }
    struct node *B = A;
    while(B->next->next!=NULL)
    {
        B=B->next;
    }
    free(B->next);
    B->next = NULL;
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
    first = dltB(first);
    display(first);
    dltM(first,3);
    display(first);
    dltE(first);
    display(first);
    return 0;
}
