#include <stdio.h>
int sumOfDigits(int num)
{
    int sum = 0, digit, i;
    for(i = 0; i < 5; i++)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num, result;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    /*lavanya2025280007*/
    result = sumOfDigits(num);
    printf("Sum of digits = %d", result);
    return 0;
}
