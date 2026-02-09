#include <stdio.h>
void sumNatural() {
    int i, sum = 0;
    for (i = 1; i <= 100; i++)
        sum += i;
    printf("Sum of first 100 natural numbers = %d\n", sum);
}
int main() {
    sumNatural();
    return 0;
}
