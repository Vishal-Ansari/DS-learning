#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head1, *head2, *newnode1, *newnode2, *temp1 ,*temp2;;

int main()
{
    int choice = 1,choice2=1;
    head1 = 0;
    head2 = 0;

    printf("enter the data for first linked list\n");
    while (choice)
    {
        newnode1 = (struct node *)malloc(sizeof(struct node));
        printf("enter the data in the list:          ");
        scanf("%d", &newnode1->data);
        newnode1->next = 0;

        if (head1 == 0)
        {
            head1 = temp1 = newnode1;
        }
        else
        {
            temp1->next = newnode1;
            temp1 = newnode1;
        }

        printf("do u want to continue (0,1): ");
        scanf("%d", &choice);
    }

    temp1=head1;
    while(temp1!=0)  {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }

printf("\n\nnow fill data for 2 linked list\n");

    while (choice2)
    {
        newnode2 = (struct node *)malloc(sizeof(struct node));
        printf("enter the data in the list:          ");
        scanf("%d", &newnode2->data);
        newnode2->next = 0;

        if (head2 == 0)
        {
            head2 = temp2 = newnode2;
        }
        else
        {
            temp2->next = newnode2;
            temp2 = newnode2;
        }

        printf("do u want to continue (0,1): ");
        scanf("%d", &choice2);
    }
   
    temp2=head2;
    while(temp2!=0)  {
        printf("%d ",temp2->data);
        temp2=temp2->next;
    }

temp1=head1;
temp2=head2;
printf("\nafter the merging two  lnked list the data is\n");
    while(temp1!=0)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;
    } 
    temp1 = head2;
    while(temp1!=0)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }


}