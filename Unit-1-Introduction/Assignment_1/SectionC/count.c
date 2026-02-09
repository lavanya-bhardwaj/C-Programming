#include <stdio.h>

void countNumbers(int n) {
    int num, pos = 0, neg = 0, zero = 0;
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Zeros = %d\n", zero);
}
int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    countNumbers(n);
    return 0;
}
