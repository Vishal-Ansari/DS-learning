#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head, *temp, *newnode;

void create()
{
    int choice = 1;
    head = 0;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data: --------------     ");
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
        temp->next=head;

        printf("do u want to continue? (0,1):-  ");
        scanf("%d", &choice);
    }
}

void display()
{
    temp = head;
    while (temp->next!= head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}

int main()
{
    printf("create the list \n\n ");
    create();
    printf("the data of list of is\n");
    display();
}