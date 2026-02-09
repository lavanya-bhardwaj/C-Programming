#include <stdio.h>

void calculateBill(int qty, float price) {
    float total, discount = 0;
    total = qty * price;
    if (qty > 100) {
        discount = total * 0.20;
    } 
    else {
        discount = total * 0.10;
    }
    total = total - discount;
    if (total > 5000) {
        total = total - (total * 0.10);
    }
    printf("%.2f", total);
}

int main() {
    int qty;
    float price;
    scanf("%d %f", &qty, &price);
    calculateBill(qty, price);
    return 0;
}
