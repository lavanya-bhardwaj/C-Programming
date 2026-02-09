#include <stdio.h>
void calculateIlliterates(int population)
{
    int men, women;
    int literate, literateMen, literateWomen;
    int illiterateMen, illiterateWomen;

    men = 0.52 * population;
    women = population - men;

    literate = 0.48 * population;
    literateMen = 0.35 * population;
    literateWomen = literate - literateMen;

    illiterateMen = men - literateMen;
    illiterateWomen = women - literateWomen;

    printf("Illiterate Men = %d\n", illiterateMen);
    printf("Illiterate Women = %d\n", illiterateWomen);
}
int main()
{
    int population = 80000;
    calculateIlliterates(population);
    return 0;
}
