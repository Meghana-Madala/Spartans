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
void delete_Beg()
{
    struct node* ptr = head;
    head = ptr->next;
    free(ptr);
}
void delete_End()
{
    struct node* ptr = head;
    struct node* preptr = NULL;
    while(ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
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
        create_LL(x);
    }
    print_LL();
    delete_Beg();
    printf("\nAfter Deletion at Beg\n");
    print_LL();
    delete_End();
    printf("\nAfter Deletion at End\n");
    print_LL();
}
