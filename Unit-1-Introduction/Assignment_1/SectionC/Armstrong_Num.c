#include <stdio.h>
#include <math.h>

void checkArmstrong(int num) {
    int temp = num
    int digits = 0;
    int sum = 0, rem;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}
