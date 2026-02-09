#include <stdio.h>

void calculateRebate(int n) {
    int i, type, units;
    float rate, rebate;

    for (i = 1; i <= n; i++) {
        printf("\nCustomer %d\n", i);
        printf("Enter customer type (1/2/3): ");
        scanf("%d", &type);
        printf("Enter units consumed: ");
        scanf("%d", &units);
        if (units <= 60) {
            if (type == 1) {
              rate = 10;
            }
            else if (type == 2){
              rate = 8;
            }
            else {
              rate = 6;
            }
        }
        else if (units <= 100) {
            if (type == 1) {
              rate = 5;
            }
            else if (type == 2){ 
              rate = 4;
            }
            else{
              rate = 3;
            }
        }
        else {
            if (type == 1) {
              rate = 4;
            }
            else if (type == 2){ 
              rate = 2;
            }
            else {
              rate = 1;
            }
        }
        rebate = units * rate;
        printf("Rebate = %.2f paise\n", rebate);
    }
}

int main() {
    int n;
    printf("Enter number of customers: ");
    scanf("%d", &n);
    calculateRebate(n);
    return 0;
}
