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
void insert_Pos(int ele,int p)
{
  int i;
  struct node* tempo = (struct node*)malloc(sizeof(struct node));
  tempo -> data = ele;
  tempo -> next = NULL;
  if(p == 1)
  {
    tempo -> next = head;
    head = tempo;
    return;
  }
  struct node* boy = head;
  for(i = 1;i<p -1;i++)
  {
    boy = boy -> next;
  }
  if(p <= 0 || boy -> next == NULL)
  {
      printf("\nPosition u want to enter is INVALID\n");
      return;
  }
  tempo -> next = boy -> next;
  boy -> next = tempo;
}
void delete_nth_node(int dat)
{
    struct node* boy = head;
    struct node* ptr = head;
    while(boy -> data != dat)
    {
        ptr = boy;
        boy = boy -> next;
    }
    ptr -> next = boy ->next;
    free(boy);
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
    printf("\nEnter the element u want to insert : ");
    scanf("%d",&ele);
    printf("\nEnter the position : ");
    scanf("%d",&p);
    insert_Pos(ele,p);
    print_LL();
    printf("\nEnter the element u want to delete : ");
    scanf("%d",&dat);
    delete_nth_node(dat);
    print_LL();
}
