#include <stdio.h>
void sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    sumOfDigits(num);
    return 0;
}
