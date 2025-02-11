#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *stnode;
void createnodelist(int n) {
    struct node *fnnode, *tmp;
    int num, i;

    stnode=(struct node*)malloc(sizeof(struct node));
    if (stnode == NULL) {
        printf("Memory cannot be allocated.");
    }
    else {
        printf("Enter data :");
        scanf("%d", &num);
        stnode->data=num;
        stnode->next=NULL;
        tmp=stnode;
    
    for (i=2;i<=n;i++) {
        fnnode=(struct node*)malloc(sizeof(struct node));
        if (fnnode == NULL) {
            printf("Memory cannot be allocated.");
            break;
        }
        else {
         printf("Enter data  %d:", i);
         scanf("%d", &num);
         fnnode->data=num;
         fnnode->next=NULL;
         tmp->next=fnnode;
         tmp=tmp->next;
        }
    }
}
}

void displaylist() {
    struct node *tmp;
    
    if (stnode == NULL) {
        printf("The list is empty.");
    }
    else {
        tmp=stnode;
        while(tmp != NULL) {
        printf("Data=%d\n",tmp->data);
        tmp=tmp->next;
        }
   }
}

int main() {
    int n;
    printf("\n Enter of nodes:");
    scanf("%d", &n);
    
    createnodelist(n);
    printf("\n Entered values for list.\n");
    displaylist();
    return 0;
}
