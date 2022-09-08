#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next, *prev;
} * head, *newnode, *temp, *tail;

void create()
{
    int choice = 1;
    head=0;
    while (choice)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :-      ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
            newnode->prev = 0;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("\ncontinue? (0,1) -");
        scanf("%d", &choice);
    }
}

bool palindrome()
{
    tail=temp;
    temp=head;
    while(tail!=0 && temp!=0)
    {
        if(temp->data!=tail->data)
        return false;
        temp=temp->next;
            tail=tail->prev;
        return true;
        
    }
}

void display()
{
    temp=head;
    printf("the content of list is\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}



int main()
{
    create();
    if(palindrome()==true)
    printf("it is palindrome");
    else
    printf("it is not palindrome");
    display();
}