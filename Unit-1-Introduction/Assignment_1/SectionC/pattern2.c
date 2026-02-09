#include <stdio.h>

void pattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
