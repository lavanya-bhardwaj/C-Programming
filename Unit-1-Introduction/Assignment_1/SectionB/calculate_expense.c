#include <stdio.h>
void calculateExpense(int qty, float price) {
    float total, discount, finalAmount;
    total = qty * price;
    discount = total * 0.10; 
    finalAmount = total - discount;
    if (qty > 100 || finalAmount > 5000) {
        finalAmount = finalAmount - (finalAmount * 0.10);
    }
    printf("Total amount to be paid = %.2f\n", finalAmount);
}

int main() {
    int quantity;
    float price;
    printf("Enter quantity and price per item: ");
    scanf("%d %f", &quantity, &price);
    calculateExpense(quantity, price);
    return 0;
}
