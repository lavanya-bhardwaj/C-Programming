#include <stdio.h>

int isArmstrong(int num)
{
    int original = num;
    int sum = 0;
    int digit;

    while(num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
