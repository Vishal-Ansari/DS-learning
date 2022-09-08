#include <stdio.h>
#include <stdlib.h>
#define size 100
int front = -1;
int rear = -1;
int Q[size];

void insert()
{
    int data;
    if (rear == size - 1)
        printf("que is full");
    else
    {
        if (front == -1)
            front = 0;
        printf("enter the data:- ");
        scanf("%d", &data);
        Q[++rear] = data;
    }
}

void delete()
{
    if (front == -1 && rear == -1)
        printf("queue is empty ");
    else if (front == rear)
        front = rear = -1;
    else
    {
        printf("the deleted element in the queue is %d ", Q[front]);
        front++;
    }
}

void display()
{
    if (front ==-1)
        printf("the que is empty \n");
    else
    {
        for (int i = front; i <=rear; i++)
            printf("%d ", Q[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 