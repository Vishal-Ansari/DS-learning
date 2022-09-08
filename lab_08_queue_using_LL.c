#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=0,*rear=0;


void enq(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0)
    front=rear=newnode;
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    struct node *temp;
    if(front ==0 && rear==0)
    printf("que is empty");
    else{
        temp=front;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void deq()
{
    struct node *temp;
    if(front ==0 && rear==0)
    printf("que is empty");
    else
    {
        temp=front;
        printf("the dequed element is %d ",temp->data);
        front=front->next;
        free(temp);
    }
}

int main()
{
int x,a,choice=1;
     while (choice)
    {
        printf("enter the choice....1. enque   2.deque   3.DISPLAY\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
         printf("enter the data: ");
    scanf("%d",&a);
            enq(a);
            break;
        case 2:
            deq();
            break;
        case 3:
            display();

        }
        printf("do you want to continue?? press 0 or 1:  ");
        scanf("%d", &choice);
    }
}
