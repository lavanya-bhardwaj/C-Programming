#include <stdio.h>
void findMax(int a, int b) {
    if (a > b){
        printf("Maximum number is %d\n", a);
    }
    else{
        printf("Maximum number is %d\n", b);
    }
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    findMax(a, b);
    return 0;
}
