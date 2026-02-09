#include <stdio.h>

void calculateTax(char name, char status, float grossIncome, int children) {
    float personalAllowance, childAllowance;
    float taxableIncome, tax = 0;
    if (status == 'S' || status == 's'){
        personalAllowance = 3600;
    }
    else{
        personalAllowance = 6000;
    }
    childAllowance = children * 1200;
    taxableIncome = grossIncome - (personalAllowance + childAllowance);
    if (taxableIncome <= 0) {
        tax = 0;
    }
    else if (taxableIncome <= 10000) {
        tax = 0;
    }
    else if (taxableIncome <= 20000) {
        tax = (taxableIncome - 10000) * 0.20;
    }
    else if (taxableIncome <= 40000) {
        tax = (10000 * 0.20) + (taxableIncome - 20000) * 0.30;
    }
    else {
        tax = (10000 * 0.20) + (20000 * 0.30) + (taxableIncome - 40000) * 0.40;
    }
    printf("\nName (Initial): %c\n", name);
    printf("Status Code  : %c\n", status);
    printf("Gross Income : %.2f\n", grossIncome);
    printf("Taxable Income: %.2f\n", taxableIncome);
    printf("Income Tax   : %.2f\n", tax);
}
int main() {
    char name, status;
    float grossIncome;
    int children;
    printf("Enter Name Initial: ");
    scanf(" %c", &name);
    printf("Enter Status Code (S/M): ");
    scanf(" %c", &status);
    printf("Enter Gross Income: ");
    scanf("%f", &grossIncome);
    printf("Enter Number of Children: ");
    scanf("%d", &children);
    calculateTax(name, status, grossIncome, children);
    return 0;
}
