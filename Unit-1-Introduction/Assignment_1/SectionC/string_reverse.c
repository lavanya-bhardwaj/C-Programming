#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int i, len;
    len = strlen(str);
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    reverseString(str);
    return 0;
}
