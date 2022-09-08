#include <stdio.h>
#include<stdlib.h>

void main()
{
  struct node
  {
    int data;
    struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice = 1,yes=1;
  while (choice)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data of the list: ");
    scanf("%d", &newnode->data);

    newnode->next = 0;
    if (head == 0)
    {
      temp = head = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
    printf("do u want to continue?? press 1 for continue 0 for exit: ");
    scanf("%d", &choice);
  }
  //  now code to display the entered elements..

  temp=head;
  printf("the entered elements in linked list are: ");
  while(temp!=0)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
  
}  