#include <stdio.h>

long long fact(int n)
{
    long long f = 1;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}


long long perm(int n, int r)
{
    return fact(n) / fact(n - r);
}

long long com(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int choice, n, r;

    printf("Choose an option:\n");
    printf("1. Permutation (nPr)\n");
    printf("2. Combination (nCr)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    {
        switch(choice)
        {
            case 1:
                printf("Permutation (%dP%d) = %lld\n", n, r, perm(n, r));
                break;

            case 2:
                printf("Combination (%dC%d) = %lld\n", n, r, com(n, r));
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
