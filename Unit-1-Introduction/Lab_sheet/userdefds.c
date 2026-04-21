#include <stdio.h>

enum DataType {
INT, FLOAT, CHAR
};

union Data
{
    int i;
    float f;
    char c;
};

struct Value
{
    enum DataType type;
    union Data data;
};

int main()
{
    struct Value v;
    printf("Choose type (1-INT, 2-FLOAT, 3-CHAR): ");
    scanf("%d", &v.type);
    if(v.type == INT)
    {
        printf("Enter integer: ");
        scanf("%d", &v.data.i);
        printf("Value = %d", v.data.i);
    }
    else if(v.type == FLOAT)
    {
        printf("Enter float: ");
        scanf("%f", &v.data.f);
        printf("Value = %.2f", v.data.f);
    }
    else if(v.type == CHAR)
    {
        printf("Enter character: ");
        scanf(" %c", &v.data.c);
        printf("Value = %c", v.data.c);
    }

    return 0;
}
