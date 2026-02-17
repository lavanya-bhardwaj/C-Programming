#include <stdio.h>
float calculateCostPrice(float sellingPrice, float profit)
{
    float totalCostPrice, costPerItem;
    totalCostPrice = sellingPrice - profit;
    costPerItem = totalCostPrice / 15;
    return costPerItem;
}

int main()
{
    float sellingPrice, profit, costPrice;
    printf("Enter total selling price of 15 items: ");
    scanf("%f", &sellingPrice);
    /*lavanya2025280007*/
    printf("Enter total profit earned: ");
    scanf("%f", &profit);
    costPrice = calculateCostPrice(sellingPrice, profit);
    printf("Cost Price of one item = %.2f", costPrice);
    return 0;
}
