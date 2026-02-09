#include <stdio.h>

void searchChar(char str[], char ch) {
    int i, found = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Character not found\n");
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    searchChar(str, ch);
    return 0;
}
