#include <stdio.h>

float costPricePerItem(float totalSP, float totalProfit)
{
    float totalCP, cpPerItem;

    totalCP = totalSP - totalProfit;
    cpPerItem = totalCP / 15;

    return cpPerItem;
}

int main()
{
    float totalSP, totalProfit, cp;

    printf("Enter total selling price of 15 items: ");
    scanf("%f", &totalSP);

    printf("Enter total profit earned: ");
    scanf("%f", &totalProfit);

    cp = costPricePerItem(totalSP, totalProfit);

    printf("Cost price of one item = %.2f\n", cp);

    return 0;
}
