#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void insert(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void display()

{
    struct node *temp;
    if(front==0 && rear==0)
        printf("quuuu is empty");

        else
        {
            temp=front;
            while(temp!=0)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
        }

}

void del()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
       printf(" qu  is empty \n");
    else
    {
        printf("the deleted element is %d ",front->data);
        front=front->next;
        free(temp);
    }

}

void main()
{
    printf("VISHAL ANSARI\n");
    int x, choice;
    do
    {
        printf("\n1.INSERT ELEMENT  2.DELETE ELEMENT  3.DISPLAY ELEMENTS  0.EXIT \n");
        printf("Enter your choice:  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nenter the element: ");
            scanf("%d",&x);
            insert(x);
            break;

            case 2:
            del();
            break;

            case 3:
            display();
            break;

        }

    } while (choice!=0);
    
}