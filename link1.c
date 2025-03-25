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
struct node *insrtB(struct node *A)
{
    struct node *B;
    int value;

    if(A==NULL)
    {
        printf("list is empty..");
        return B;
    }

    printf("\nEnter the value which you want to insert at bigging..\n");
    scanf("%d",&value);
    B = (struct node*)malloc(sizeof(struct node));
    B->data = value;

    B->next = A;
    A=B;

    return A;
}
void insrtE(struct node *A)
{
    struct node *B;
    int value;
    printf("\nEnter the value which you want to insert at ending..\n");
    scanf("%d",&value);
    B = (struct node*)malloc(sizeof(struct node));
    B->data = value;
    B->next = NULL;

    struct node *C;
    C=A;
    while(C->next!=NULL)
    {
        C=C->next;
    }
    C->next = B;
}

void insrtA(struct node *A, int x)
{
    struct node *B;
    int value;
    printf("\nEnter the value which you want to insert at %d..\n",x);
    scanf("%d",&value);
    B = (struct node*)malloc(sizeof(struct node));
    B->data = value;
    B->next = NULL;

    struct node *C = A;
    while(C!=NULL && C->data != x)
    {
        C=C->next;
    }
    B->next = C->next;
    C->next = B;
}

void insrtBf(struct node *A, int x)
{
    struct node *B;
    int value;
    printf("\nEnter the value which you want to insert at %d..\n",x);
    scanf("%d",&value);
    B = (struct node*)malloc(sizeof(struct node));
    B->data = value;
    B->next = NULL;

    struct node *C = A;
    while(C!=NULL && C->next->data != x)
    {
        C=C->next;
    }
    B->next = C->next;
    C->next = B;
}

void insrtAn(struct node *A, int x)
{
    struct node *B;
    int value;
    printf("\nEnter the value which you want to insert at %d..\n",x);
    scanf("%d",&value);
    B = (struct node*)malloc(sizeof(struct node));
    B->data = value;
    B->next = NULL;

    struct node *C = A;
    int i;
    for(i = 0; i < x-1; i++)
    {
        C=C->next;
    }
    B->next = C->next;
    C->next = B;
}

void insrtBn(struct node *A, int x)
{
    struct node *B;
    int value;
    printf("\nEnter the value which you want to insert at %d..\n",x);
    scanf("%d",&value);
    B = (struct node*)malloc(sizeof(struct node));
    B->data = value;
    B->next = NULL;

    struct node *C = A;
    int i;
    for(i = 0; i < x-2; i++)
    {
        C=C->next;
    }
    B->next = C->next;
    C->next = B;
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
    first = insrtB(first);
    display(first);
    insrtE(first);
    insrtA(first,4);
    display(first);
    insrtBf(first,4);
    display(first);
    insrtAn(first,3);
    display(first);
    insrtBn(first,3);
    display(first);
    return 0;

}
