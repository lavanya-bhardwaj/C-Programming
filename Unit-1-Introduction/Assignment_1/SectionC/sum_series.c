#include <stdio.h>
void sumSeries(int n) {
    int i, j;
    double sum = 0.0, fact;
    for (i = 1; i <= n; i++) {
        fact = 1;
        for (j = 1; j <= (2*i - 1); j++)
            fact *= j;
        sum += (double)i / fact;
    }
    printf("Sum of series = %.6f\n", sum);
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    sumSeries(n);
    return 0;
}
