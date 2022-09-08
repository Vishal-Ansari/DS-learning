#include<stdio.h>
int main()
{
    printf("VISHAL ANSARI \n");
    int n,m,j;
    printf("enter how many numbers u want to print\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    m=n/2;
    else
    m=n/2+1;

    for(int i=0,j=0;i<n;i++,j+=2)
    {
        arr[i]=arr[j];
    }
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
      
}