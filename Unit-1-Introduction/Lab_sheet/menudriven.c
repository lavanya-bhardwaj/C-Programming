#include <stdio.h>
#include <stdlib.h>

void menu(int *ch)
{
    printf("\n----- MENU -----\n");
    printf("1. Input Elements\n");
    printf("2. Sum of Array\n");
    printf("3. Average of Array\n");
    printf("4. Minimum Element\n");
    printf("5. Maximum Element\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", ch);
}

void input(int data[], int *n)
{
    int i;
    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter elements:\n");
    for(i=0;i<*n;i++)
        scanf("%d", &data[i]);
}

void display(int data[], int n)
{
    int i;
    printf("Array elements: ");
    for(i=0;i<n;i++)
        printf("%d ", data[i]);
    printf("\n");
}

int sum_array(int data[], int n)
{
    int i, sum=0;
    for(i=0;i<n;i++)
        sum += data[i];

    return sum;
}

float avg_array(int data[], int n)
{
    return (float)sum_array(data,n)/n;
}

int min_array(int data[], int n)
{
    int i, min=data[0];

    for(i=1;i<n;i++)
    {
        if(data[i] < min)
            min = data[i];
    }
    return min;
}

int max_array(int data[], int n)
{
    int i, max=data[0];

    for(i=1;i<n;i++)
    {
        if(data[i] > max)
            max = data[i];
    }
    return max;
}

int main()
{
    int data[100], ch, num_element=0;

    while(1)
    {
        menu(&ch);

        switch(ch)
        {
            case 1:
                input(data,&num_element);
                break;

            case 2:
                display(data,num_element);
                printf("Sum = %d\n", sum_array(data,num_element));
                break;

            case 3:
                display(data,num_element);
                printf("Average = %.2f\n", avg_array(data,num_element));
                break;

            case 4:
                display(data,num_element);
                printf("Minimum = %d\n", min_array(data,num_element));
                break;

            case 5:
                display(data,num_element);
                printf("Maximum = %d\n", max_array(data,num_element));
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
