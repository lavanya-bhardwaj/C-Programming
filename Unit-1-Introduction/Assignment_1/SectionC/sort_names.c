#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n) {
    char temp[50];
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}
int main() {
    int n, i;
    char names[10][50];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    sortNames(names, n);
    return 0;
}
