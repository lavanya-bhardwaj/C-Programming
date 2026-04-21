#include <stdio.h>

int freq(char str[], char ch)
{
    int i, count = 0;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            count++;
    }
    return count;
}

int wordCount(char str[])
{
    int i, count = 1;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            count++;
    }
    return count;
}

int main()
{
    char str[100], ch;
    int i;
    printf("Enter string: ");
    gets(str);
    printf("Enter character: ");
    scanf("%c",&ch);
    printf("Frequency of %c = %d\n", ch, freq(str,ch));
    printf("Number of words = %d\n", wordCount(str));
    printf("Alphabet frequencies:\n");
    for(i='a'; i<='z'; i++)
    {
        int f = freq(str,i);
        if(f>0)
            printf("%c = %d\n", i, f);
    }

    return 0;
}
