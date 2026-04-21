#include <stdio.h>

void increase(int *x)
{
    (*x)++;   
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    increase(&num);
    printf("Value after increment: %d", num);

    return 0;
}
