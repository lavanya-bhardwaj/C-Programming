#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int C, D;

    printf("Enter value of C: ");
    scanf("%d", &C);

    printf("Enter value of D: ");
    scanf("%d", &D);

    swap(&C, &D);/*lavanya2025280007*/
    printf("After swapping:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
