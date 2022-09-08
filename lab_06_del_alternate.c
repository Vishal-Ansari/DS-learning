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

        printf("do u want to continue? (0,1):-  ");
        scanf("%d", &choice);
    }
}

void display()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void delete_alternate()
{
    struct node *pre, *new;
    pre = head;
    new = head->next;
    while ( new != 0 && pre!=0 )
    {
        pre->next = new->next; 
        pre = pre->next; 
        if (pre != 0) 
            new = pre->next;
    }
}

int main()
{
    printf("create the list \n\n ");
    create();
    printf("the data of list of is\n");
    display();
    delete_alternate();
    printf("after deleting alternate node the data is\n");
    display();
}