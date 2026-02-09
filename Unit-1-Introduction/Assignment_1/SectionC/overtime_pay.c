#include <stdio.h>
void calculateOvertime() {
    int i, hours;
    float pay;
    for (i = 1; i <= 10; i++) {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);
        if (hours > 40) {
            pay = (hours - 40) * 12;
            printf("Overtime Pay = Rs. %.2f\n", pay);
        } else {
            printf("No Overtime Pay\n");
        }
    }
}

int main() {
    calculateOvertime();
    return 0;
}
