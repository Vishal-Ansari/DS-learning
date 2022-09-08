#include <stdio.h>
 
void towers(int num, char from_A, char to_B, char aux_C)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from_A, to_B);
        return;
    }
    towers(num - 1, from_A, aux_C, to_B);
    printf("\n Move disk %d from rod %c to rod %c", num, from_A, to_B);
    towers(num - 1, aux_C, to_B, from_A);
}
 
int main()
{
    int num;
    printf(" VISHAL ANSARI");
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'B', 'C');
    return 0;
}
