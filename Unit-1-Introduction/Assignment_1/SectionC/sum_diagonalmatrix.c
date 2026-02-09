#include <stdio.h>

void diagonalSum() {
    int a[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) {
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
}
int main() {
    diagonalSum();
    return 0;
}
