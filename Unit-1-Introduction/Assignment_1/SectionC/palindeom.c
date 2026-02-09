#include <stdio.h>
#include <string.h>
void checkPalindrome(char str[]) {
    int i, len, flag = 1;
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
        }
    }
    if (flag == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
}
int main() {
    char str[100];
    scanf("%s", str);
    checkPalindrome(str);
    return 0;
}
