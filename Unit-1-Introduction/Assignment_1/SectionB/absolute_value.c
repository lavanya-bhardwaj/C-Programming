#include <stdio.h>
void absoluteValue(int num) {
    if (num < 0)
        printf("Absolute value = %d\n", -num);
    else
        printf("Absolute value = %d\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    absoluteValue(num);
    return 0;
}
