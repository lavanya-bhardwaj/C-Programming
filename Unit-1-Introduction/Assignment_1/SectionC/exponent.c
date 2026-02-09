#include <stdio.h>

void power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++)
        result *= a;
    printf("Result = %d\n", result);
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    power(a, b);
    return 0;
}
