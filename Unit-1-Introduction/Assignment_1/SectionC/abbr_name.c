#include <stdio.h>

void abbreviateName(char str[]) {
    int i;

    printf("%c. ", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (str[i + 1] != '\0') {
                printf("%c. ", str[i + 1]);
            }
        }
    }

    for (i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            printf("%s", &str[i + 1]);
            break;
        }
    }
}

int main() {
    char name[100];
    scanf(" %[^\n]", name);
    abbreviateName(name);
    return 0;
}
