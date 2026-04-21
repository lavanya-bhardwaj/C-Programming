#include <stdio.h>

void printName(char name[])
{
    int i = 0;
    printf("%c. ", name[0]);   
    while(name[i] != ' ')
        i++;

    i++;
    printf("%c. ", name[i]);   
    while(name[i] != ' ')
        i++;

    i++;
    while(name[i] != '\0')     
    {
        printf("%c", name[i]);
        i++;
    }
}

int main()
{
    char name[100];
    printf("Enter full name: ");
    gets(name);
    printName(name);
    return 0;
}
