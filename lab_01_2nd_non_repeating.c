#include <stdio.h>
int main()
{
    int n, i,j, c= 0;
    printf("enter the size of an array:-  ");
    scanf("%d", &n);
    int arr[n];
    printf("\n enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (j == n)
            c++;

        if (c == 2)
            break;
    }

    if (c == 2)
        printf("second non repeating  element: %d\n", arr[i]);
    else
        printf("SECOND ELEMENT DOESNT EXIST");

    return 0;
}
