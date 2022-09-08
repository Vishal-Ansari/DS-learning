#include <stdio.h>
#include <stdlib.h>

void reverse_Array(int *arr, int n, int i)
{
    int temp;
    if (i != n / 2)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = temp;

        reverse_Array(arr, n, i + 1);
    }
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
}

int main()
{
    int n, i, j, c = 0;
    printf("enter the size of an array:-  ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\n enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", (arr + i));
    printf("array is\n");
    display(arr,n);
    reverse_Array(arr,n,0);
    printf("reversed array is\n");
    display(arr,n);

    return 0;
}
