#include <stdio.h>
void addComplex() {
    float r1, i1, r2, i2;
    float rSum, iSum;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &r1, &i1);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &r2, &i2);
    rSum = r1 + r2;
    iSum = i1 + i2;
    /*lavanya2025280007*/
    printf("Sum = %.2f + %.2fi\n", rSum, iSum);
}

int main() {
    addComplex();
    return 0;
}
