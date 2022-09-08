#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int q[MAX], front = 0, rear = 0;


void main()
{
    printf("VISHALL ANSARI \n");

    int choice;
    printf(" quu Menu");
    printf("\n 1. Insert Rear  2.inser at front  3.delete rear  4.delete front  5.display  0.exit \n");
    while (choice != 0)
    {
        printf(" Enter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_rear();
            break;
        case 2:
            add_front();
            break;
        case 3:
            delete_rear();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf(" Wrong Choice\n");
        }
    }
}

void add_rear()
{
    int x;
    printf("\nEnter value to insert : ");
    scanf("%d", &x);
    if (rear == MAX)
    {
        printf(" quuu is full\n");
        return;
    }
    else
    {
        rear++;
        q[rear] = x;
        if (rear == 0)
            rear = 1;
        if (front == 0)
            front = 1;
    }
}
void add_front()
{
    int x;
    printf("\n Enter value to insert:-");
    scanf("%d", &x);
    if (front <= 1)
    {
        printf(" Cannott add value at front end\n");
        return;
    }
    else
    {
        front--;
        q[front] = x;
    }
}

void delete_front()
{
    int x;
    if (front == 0)
    {
        printf(" quu is empty\n");
        return;
    }
    else
    {
        x = q[front];
        printf("Deleted element is %d\n", x);
        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            front++;
        }
    }
}

void delete_rear()
{
    int x;
    if (rear == 0)
    {
        printf(" Cannnot delete value at rear end\n");
        return;
    }
    else
    {
        x = q[rear];
        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear--;
            printf(" Deleted element is %d\n", x);
        }
    }
}

void display()
{
    int i;
    if (front == 0)
    {
        printf(" quu is empty\n");
        return;
    }
    else
    {
        printf("\n elements are ");
        for (i = front; i <= rear; i++)
        {
            printf(" %d", q[i]);
        }
    }
}