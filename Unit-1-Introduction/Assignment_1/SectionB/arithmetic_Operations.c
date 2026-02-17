#include <stdio.h>
void arithmeticOperation(int a, int b) {
    if (a == 0 || b == 0) {
        printf("Wrong Entry\n");
    }
    else if (a > b) {
        printf("Multiplication = %d\n", a * b);
    }
    else if (b > a) {
        printf("Addition = %d\n", a + b);
    }
    else {/*lavanya2025280007*/ 
        printf("Subtraction = %d\n", a - b);
    }
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    arithmeticOperation(a, b);
    return 0;
}
