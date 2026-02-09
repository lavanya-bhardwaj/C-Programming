#include <stdio.h>

void countFrequency(char str[], char ch) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("%d", count);
}

int main() {
    char str[100], ch;
    scanf("%s %c", str, &ch);
    countFrequency(str, ch);
    return 0;
}
