#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}NODE;
NODE* head2;
NODE* Insert_Beg(NODE* head,int data)
{
	NODE* temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->next=head;
	head=temp;
	return head;
}
NODE* Insert_End(NODE* head,int data)
{
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    temp -> data = data;
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
        return head;
    }
    struct node* man = head;
    while(man -> next != NULL)
    {
        man = man-> next;
    }
    man -> next = temp;
    return head;
}
void print_LL(NODE* head)
{
	NODE* man = head;
	printf("\nIn printf\n");
	while(man->next!=NULL)
	{
		printf("%d -> ",man->data);
		man=man->next;
	}
	printf(" %d\n",man->data);
}
void rearrange_LL(NODE* head)
{
    NODE* ptr = head;
    NODE* preptr = NULL;
    while(ptr->next != NULL)
    {
        if(ptr->data == 0)
        {
            head2 = Insert_Beg(head2,preptr->data);
            ptr = ptr->next;
        }
        else if(ptr->data == 1)
        {
            head2 = Insert_End(head2,preptr->data);
            ptr = ptr->next;
        }
        else
        {
            preptr = ptr;
            ptr = ptr->next;
        }
    }
    head2 = (ptr->data == 0)?Insert_Beg(head2,preptr->data):Insert_End(head2,preptr->data);
}
void main()
{
    NODE* head = NULL;
    head2 = NULL;
    int n,i,x;
    printf("Enter no.of nodes : ");
    scanf("%d",&n);
    for(i=1;i <= n;i++)
    {
        printf("\nEnter node %d : ",i);
        scanf("%d",&x);
        head = Insert_End(head,x);
    }
    print_LL(head);
    rearrange_LL(head);
    print_LL(head2);
}
