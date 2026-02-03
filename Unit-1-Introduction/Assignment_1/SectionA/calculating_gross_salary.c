#include <stdio.h>

float calculateGross(float basic)
{
    float da, hra, gross;

    da = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;

    return gross;
}

int main()
{
    float basic, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    gross = calculateGross(basic);

    printf("Gross Salary = %.2f", gross);

    return 0;
}
