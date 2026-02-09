#include <stdio.h>

void Gcd(int a, int b) {
    int i, gcd;
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("GCD = %d\n", gcd);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    Gcd(a, b);
    return 0;
}
