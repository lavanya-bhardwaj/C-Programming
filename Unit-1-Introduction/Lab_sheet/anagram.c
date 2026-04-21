#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1[26]={0}, count2[26]={0};
    int i;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for(i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;

    for(i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;

    for(i=0;i<26;i++)
    {
        if(count1[i]!=count2[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
