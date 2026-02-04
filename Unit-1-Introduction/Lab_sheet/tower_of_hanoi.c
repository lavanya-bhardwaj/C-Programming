#include <stdio.h>
void ToH(int n, char src, char aux, char dest)
{
    if (n>0)
    {
        ToH(n-1, src, dest, aux);
        printf("%c-->%c\n",src,dest);
        ToH(n-1, aux, src, dest);
    }
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    ToH(n,'A','B','C');
    return 0;
}
