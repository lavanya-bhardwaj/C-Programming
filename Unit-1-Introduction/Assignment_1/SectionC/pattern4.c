#include <stdio.h>

void pattern(int n) {
    int i, j, space = 0;
    for (i = n; i >= 1; i--) {
        for (j = 0; j < space; j++){
            printf(" ");
        }
        for (j = 1; j <= i; j++){
            printf("*");
        }
        space++;
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
