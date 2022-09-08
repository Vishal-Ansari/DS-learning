#include<stdio.h>
#include<stdlib.h>


int push(int arr[], int top)
{
    int x;
    printf("enter the data:-  ");
    scanf("%d",&x);
    arr[++top]=x;
    return top;
}

int pop(int arr[], int top)
{
    printf("the popped element is %d\n",arr[top--]);
    return top;
}

void peek(int arr[],int top)
{
    printf("the element at peek is %d\n",arr[top]);
}

void display(int arr[], int top)
{
    int temp=top;
    printf("the value in the stack are\n");
    while(temp>=0)
    {
        printf("%d ",arr[temp--]);
    }
}



int main()
{
  int arr[100];
  int choice=0,top=-1;

while (choice!=5)
{
  printf("enter the choice\n   1.PUSH     2.POP     3.PEEK      4.DISPLAY    5.EXIT\n");
     scanf("%d",&choice);
    switch(choice)
    {
        case 1: top=push(arr,top);
        break;
        case 2: pop(arr,top);
        break;
        case 3: peek(arr,top);
        break;
        case 4: display(arr,top);
        break;
        case 5: printf("exit\n");
    }
}

    return 0;
}
