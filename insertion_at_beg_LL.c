#include <stdio.h>
#include<stdlib.h>

void main()
{
  struct node
  {
    int data;
    struct node *next;
  }*head,*newnode;

  newnode=(struct node*)malloc(sizeof(struct node));

  printf("enter data: ");
  scanf("%d",&newnode->data);
  
  newnode->next=head;
  head=newnode;

}
