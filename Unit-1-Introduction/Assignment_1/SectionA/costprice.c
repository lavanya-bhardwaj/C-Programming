#include <stdio.h>
void costPrice() {
    float totalSellingPrice, totalProfit, costPerItem;
    printf("Enter total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    printf("Enter total profit earned: ");
    scanf("%f", &totalProfit);
    costPerItem = (totalSellingPrice - totalProfit) / 15;
    printf("Cost price of one item = %.2f\n", costPerItem);
}

int main() {
    costPrice();
    return 0;
}
