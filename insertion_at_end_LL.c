#include <stdio.h>
#include<stdlib.h>

void main()
{
  struct node
  {
    int data;
    struct node *next;
  }*head,*newnode,*temp;

  newnode=(struct node*)malloc(sizeof(struct node));

  printf("enter vakue to be inserted at end data: ");
  scanf("%d",&newnode->data);
  newnode->next=0;
  temp=head;
  while(temp->next!=0)
  {
      temp=temp->next;
  }
  temp->next=newnode;
  
  newnode->next=head;
  head=newnode;

}
