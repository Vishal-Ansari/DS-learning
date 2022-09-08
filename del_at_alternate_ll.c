#include <stdio.h>
#include<stdlib.h>

struct node
    {
        int data;
        struct node *next;
    }*head, *newnode, *temp,*tail;

void create()
{

    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do u want continue (0,1)??: -   ");
        scanf("%d", &choice);
    }
    
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
 
}


void delete_alternate(struct node *head)
{
    temp=head;
    tail=temp->next;
    while(temp!=0 && tail!=0) 
    {
    temp->next=tail->next;
    free(tail);
    temp=temp->next;
    if(temp!=0)
    {
        tail=temp->next;
    }

    }

printf("after deleteion the data is :  ");

    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int main(){
    int n;
printf("create the linked list\n"); 
    create();
    printf("\n to delete the linked list at alternate position press 1: ");
    scanf("%d",&n);
    if(n==1)
    delete_alternate(head);
    
    return 0;
}