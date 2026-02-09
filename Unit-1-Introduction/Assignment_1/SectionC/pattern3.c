#include <stdio.h>

void pattern3(int n) {
    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    pattern3(n);
    return 0;
}
