#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* link;
}NODE;

 //address of linked list

NODE* Insert_beg(NODE* head,int data)
{
	NODE* temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->link=head;
	head=temp;
	return head;
}
/*void delete_beg()
{
	NODE* temp;
	temp=head;
	head=temp->link;
	free(temp);
}*/
void delete_end(NODE* head)
{
	NODE* preptr=NULL;
	NODE* ptr=head;

	while(ptr->link!=NULL)
	{
		preptr=ptr;
		ptr=ptr->link;
	}
	preptr->link=NULL;
	free(ptr);
}
void Print_LL(NODE* head)
{
	NODE* manjusha=head;
	while(manjusha->link!=NULL)
	{
		printf(" %d",manjusha->data);//(*manjusha).data
		manjusha=manjusha->link;
	}
	printf(" %d\n",(*manjusha).data);
}

int main()
{
	NODE* head;
	head=NULL; //list is empty
	head = Insert_beg(head,5);
	head=Insert_beg(head,4);
	head=Insert_beg(head,3);
	head=Insert_beg(head,2);
	head=Insert_beg(head,1);
	Print_LL(head);
	/*delete_beg();
	Print_LL();*/
	delete_end(head);
	Print_LL(head);
}
