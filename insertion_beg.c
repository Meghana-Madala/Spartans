#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert_Beg(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
}
void print_LL()
{
    struct node* megh = head;
    while(megh != NULL)
    {
        printf("%d ",(*megh).data);
        megh = (*megh).next;
        if(megh != NULL)
        {
            printf(" -> ");
        }
    }
}
void main()
{
    head = NULL;
    printf("Enter no. of nodes : ");
    int n, i, x;
    scanf("%d",&n);
    for(i= 1;i<=n;i++)
    {
      printf("\nEnter node no. %d  ",i);
      scanf("%d",&x);
      insert_Beg(x);
    }
    print_LL();
}
