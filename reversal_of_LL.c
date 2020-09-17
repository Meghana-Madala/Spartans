#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void create_LL(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    struct node* man = head;
    while(man -> next != NULL)
    {
        man = man-> next;
    }
    man -> next = temp;

}
void print_LL()
{
  struct node* man = head;
  while(man -> next != NULL)
  {
      printf("%d -> ",man -> data);
      man = man -> next;
  }
  printf("%d ",man -> data);
}
void reversal_LL()
{
    struct node* postptr;
    struct node* preptr = NULL;
    struct node* ptr = head;
    while(ptr != NULL)
    {
        postptr= ptr->next;
        ptr->next = preptr;
        preptr = ptr;
        ptr = postptr;
    }
    head = preptr;
}
void main()
{
    head = NULL;
    int n,i,x,ele,p,dat;
    printf("Enter no.of nodes : ");
    scanf("%d",&n);
    for(i=1;i <= n;i++)
    {
        printf("\nEnter node %d : ",i);
        scanf("%d",&x);
        create_LL(x);
    }
    print_LL();
    printf("\nAfter reversal\n");
    reversal_LL();
    print_LL();
}
