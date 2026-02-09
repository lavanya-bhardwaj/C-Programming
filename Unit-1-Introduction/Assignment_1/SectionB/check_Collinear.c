#include <stdio.h>
void checkCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    if ((x2 - x1)*(y3 - y1) == (x3 - x1)*(y2 - y1))
        printf("All three points lie on the same straight line\n");
    else
        printf("Points do not lie on the same straight line\n");
}
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);
    checkCollinear(x1, y1, x2, y2, x3, y3);
    return 0;
}
