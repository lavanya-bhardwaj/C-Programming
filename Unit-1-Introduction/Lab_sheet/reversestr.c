#include <stdio.h>

int main()
{
    char str[100];
    int i=0, len=0;
    printf("Enter string: ");
    gets(str);
    while(str[len] != '\0')
        len++;
    printf("Reverse string: ");

    for(i=len-1;i>=0;i--)
        printf("%c", str[i]);

    return 0;
}
