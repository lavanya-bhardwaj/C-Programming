#include <stdio.h>

void matrixAddSub() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, choice;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    scanf("%d", &choice);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (choice == 1) {
                c[i][j] = a[i][j] + b[i][j];
            } else {
                c[i][j] = a[i][j] - b[i][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main() {
    matrixAddSub();
    return 0;
}
