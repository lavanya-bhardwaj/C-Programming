#include <stdio.h>
void calculateNotes(int amount)
{
    int n100, n50, n10;
    n100 = amount / 100;
    amount = amount % 100;
    n50 = amount / 50;
    amount = amount % 50;
    n10 = amount / 10;
    printf("100 Rupee Notes = %d\n", n100);
    printf("50 Rupee Notes  = %d\n", n50);
    printf("10 Rupee Notes  = %d\n", n10);
}
int main()
{
    int amount;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);
    calculateNotes(amount);
    return 0;
}
