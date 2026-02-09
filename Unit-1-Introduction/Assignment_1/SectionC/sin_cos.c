#include <stdio.h>
#include <math.h>

void calculateTrig(float x, int n, int choice) {
    float sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (choice == 1) {
            sum += pow(-1, i) * pow(x, 2*i + 1) / tgamma(2*i + 2);
        } else {
            sum += pow(-1, i) * pow(x, 2*i) / tgamma(2*i + 1);
        }
    }
    printf("%.5f", sum);
}

int main() {
    float x;
    int n, choice;
    scanf("%f %d %d", &x, &n, &choice);
    calculateTrig(x, n, choice);
    return 0;
}
