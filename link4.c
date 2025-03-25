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

void rvsP(struct node *A)
{
    if (A==NULL)
    {
        printf("list is empty..");
        return NULL;
    }
    printf("\nLinked list are..\n");
    if(A!=NULL)
    {
        rvs(A->next);
        printf("%d\n",A->data);
    }
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

void rvs(struct node *A,struct node *B)
{
    if(A!=NULL)
    {
        rvs(A->next,A);
        A->next=B;
    }
    else
        first = B;
}

void rvs2(struct node *A)
{
    struct node *B=NULL;
    struct node *C=NULL;
    while(A!=NULL)
    {
        B=C;
        C=A;
        A=A->next;
        B->next=C;
    }
    first = B;
}
void dupli(struct node *A)
{
    struct node *B=A;
    while(B!=NULL && B->next != NULL)
    {
        if(B->data == B->next->data)
        {
            struct node *C = B->next;
            B->next = B->next->next;
            free(C);
        }
        else
            B=B->next;
    }
}
int main()
{

    int n;
    printf("Enter how many node you want to create..\n");
    scanf("%d",&n);


    first = create(n);
    display(first);
    rvs2(first);
//    dupli(first);
    display(first);
    return 0;
}
