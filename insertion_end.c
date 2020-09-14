#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert_End(int x)
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
        insert_End(x);
        print_LL();
    }
}
