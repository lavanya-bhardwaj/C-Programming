#include <stdio.h>

void denomination(int amount) {
    int notes100, notes50, notes10;
    notes100 = amount / 100;
    amount = amount % 100;
    notes50 = amount / 50;
    amount = amount % 50;
    notes10 = amount / 10;
    printf("100 Rupee Notes: %d\n", notes100);
    printf("50 Rupee Notes : %d\n", notes50);
    printf("10 Rupee Notes : %d\n", notes10);
}

int main() {
    int amount;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);
    denomination(amount);
    return 0;d
}
