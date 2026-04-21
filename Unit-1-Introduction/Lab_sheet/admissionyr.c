#include <stdio.h>

int getYear(int roll)
{
    return roll / 10000;
}

int main()
{
    int roll;
    printf("Enter roll number: ");
    scanf("%d",&roll);
    printf("Admission Year: %d", getYear(roll));

    return 0;
}
