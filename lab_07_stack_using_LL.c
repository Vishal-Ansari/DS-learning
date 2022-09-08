#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *top=0;

void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;    
    top=newnode;
}

void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    printf("empty stack");
    else
    {
    printf("the popped element is %d \n",temp->data);
    top=top->next;
    free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
        printf("stack is empty");
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}


void peek()
{
    if(top==0)
    printf("stack is empty");
    else
    printf(" the element at the top is %d",top->data);
}

int main()
{
int a,x,choice=1;
while(choice){
printf("1.PUSH 2.POP 3. DISPLAY 4.PEEK\n");
scanf("%d",&a);
switch(a)
{
    
    case 1: printf("enter the data to be pushed: "); scanf("%d",&x);  push(x);    break ;
    case 2:pop() ;    break;
    case 3:display();  break; 
    case4:  peek() ;
}
printf("do you want to continue ?(1,0): ");
scanf("%d",&choice);
}
}