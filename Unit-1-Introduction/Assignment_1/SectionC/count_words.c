#include <stdio.h>
void numberToWords(int n) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0) {
        printf("Zero");
    }
    while (n > 0) {
        printf("%s ", ones[n % 10]);
        n /= 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    numberToWords(n);
    return 0;
}
