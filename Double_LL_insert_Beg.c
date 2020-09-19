#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* prev;
    struct node* next;
}NODE;
NODE* head;
void dbl_LL_insert_beg(int data)
{
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    temp->data = data;
    temp->prev = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void print_LL()
{
    NODE* man = head;
    while(man->next != NULL)
    {
        printf("%d",man->data);
        man = man->next;
        if(man->next != NULL)
        {
            printf(" <-> ");
        }
    }
}
void main()
{
    int x,n,i;
    head = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter node %d : ",i);
        scanf("%d",&x);
        dbl_LL_insert_beg(x);
    }
    print_LL();
}
