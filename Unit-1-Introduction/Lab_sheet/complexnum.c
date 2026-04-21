#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

typedef struct Complex Complex;

void input(Complex *c)
{
    printf("Enter real part: ");
    scanf("%f",&c->real);

    printf("Enter imaginary part: ");
    scanf("%f",&c->imag);
}

Complex Add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex Sub(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex Mul(Complex a, Complex b)
{
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

void display(Complex c)
{
    printf("Result = %.2f + %.2fi\n", c.real, c.imag);
}

int main()
{
    Complex num1, num2, num3;

    printf("Enter first complex number\n");
    input(&num1);
    printf("Enter second complex number\n");
    input(&num2);
    printf("\nAddition:\n");
    num3 = Add(num1, num2);
    display(num3);
    printf("\nSubtraction:\n");
    num3 = Sub(num1, num2);
    display(num3);
    printf("\nMultiplication:\n");
    num3 = Mul(num1, num2);
    display(num3);
    return 0;
}
