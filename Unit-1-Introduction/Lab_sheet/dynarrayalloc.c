#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n1, n2, i;
    printf("Enter initial size: ");
    scanf("%d",&n1);
    arr = (int*)malloc(n1 * sizeof(int));
    printf("Enter elements:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&arr[i]);

    printf("Enter number of elements to add: ");
    scanf("%d",&n2);
    arr = (int*)realloc(arr,(n1+n2)*sizeof(int));
    printf("Enter new elements:\n");
    for(i=n1;i<n1+n2;i++)
        scanf("%d",&arr[i]);

    printf("Final array:\n");
    for(i=0;i<n1+n2;i++)
        printf("%d ",arr[i]);

    free(arr);

    return 0;
}
