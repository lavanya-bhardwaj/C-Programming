#include <stdio.h>

int calculateAggregate(int m1, int m2, int m3, int m4, int m5)
{
    return m1 + m2 + m3 + m4 + m5;
}

int main()
{
    int m1, m2, m3, m4, m5, aggregate;
    float percentage;

    printf("Enter marks of five subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    aggregate = calculateAggregate(m1, m2, m3, m4, m5);
    percentage = (aggregate / 500.0) * 100;

    printf("Aggregate Marks = %d\n", aggregate);
    printf("Percentage Marks = %.2f%%", percentage);

    return 0;
}
