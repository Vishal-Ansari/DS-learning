void getlength()
{
    int count=0;
    struct node *temp;
    temp=head;

    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("%d",count);
}