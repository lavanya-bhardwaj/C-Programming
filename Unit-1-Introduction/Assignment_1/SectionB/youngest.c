#include <stdio.h>
void youngest(int r, int s, int a) {
    if (r <= s && r <= a){
        printf("Youngest: R, Age = %d\n", r);
    }
    else if (s <= r && s <= a){
        printf("Youngest: S, Age = %d\n", s);
    }
    else{
        printf("Youngest: A, Age = %d\n", a);
    }
}
int main() {/*lavanya2025280007*/ 
    int lavanya, mukund, shreya;
    printf("Enter age of Lavanya, Mukund and Shreya: ");
    scanf("%d %d %d", &lavanya, &mukund, &shreya);
    youngest(lavanya, mukund, shreya);
    return 0;
}
