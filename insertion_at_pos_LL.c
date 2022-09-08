#include <stdio.h>
#include<stdlib.h>

void main()
{
    int i=1, pos;

  struct node
  {
    int data;
    struct node *next;
  }*head,*newnode,*temp;

  newnode=(struct node*)malloc(sizeof(struct node));
printf("enter position: ");
scanf("%d",&pos);

if(pos>count)
{
    printf("invalid position\n");
}
else{
    temp-head;
    while(i<pos)
    {
        temp=temp->next;
        i++
    }
    printf("enter value to be inserted at pos: ");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
printf("enter data: ");
scanf("%d",&newnode->data);
  
  newnode->next=head;
  head=newnode;

}
