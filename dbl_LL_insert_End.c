#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* prev;
    struct node* next;
}NODE;
NODE* head;
void dbl_LL_insert_End(int data)
{
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    NODE* man = head;
    while(man->next != NULL)
    {
        man = man->next;
    }
    man->next = temp;
    temp->prev = man;
}
void print_LL()
{
    NODE* man = head;
    while(man->next != NULL)
    {
        printf("%d <-> ",man->data);
        man = man->next;
    }
    printf("%d",man->data);
}
void main()
{
    head = NULL;
    int n,i,x;
    printf("Enter no.of nodes : ");
    scanf("%d",&n);
    for(i=1;i <= n;i++)
    {
        printf("\nEnter node %d : ",i);
        scanf("%d",&x);
        dbl_LL_insert_End(x);
    }
    print_LL();
}
