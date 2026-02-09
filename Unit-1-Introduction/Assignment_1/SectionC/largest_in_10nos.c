#include <stdio.h>
void findLargest() {
    int num, max, i;
    printf("Enter number 1: ");
    scanf("%d", &max);
    for (i = 2; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("Largest number = %d\n", max);
}

int main() {
    findLargest();
    return 0;
}
