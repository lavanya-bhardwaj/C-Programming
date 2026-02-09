#include <stdio.h>

void printPrimes() {
    int i, j, flag;
    for (i = 2; i <= 300; i++) {
        flag = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
}

int main() {
    printPrimes();
    return 0;
}
