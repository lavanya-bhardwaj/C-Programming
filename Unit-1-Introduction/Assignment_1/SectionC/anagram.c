#include <stdio.h>
#include <string.h>

void checkAnagram(char s1[], char s2[]) {
    int count1[26] = {0}, count2[26] = {0};
    int i, flag = 1;
    if (strlen(s1) != strlen(s2)) {
        flag = 0;
    }
    for (i = 0; s1[i] != '\0'; i++) {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
        }
    }
    if (flag == 1) {
        printf("Anagram");
    } else {
        printf("Not Anagram");
    }
}

int main() {
    char s1[50], s2[50];
    scanf("%s %s", s1, s2);
    checkAnagram(s1, s2);
    return 0;
}
