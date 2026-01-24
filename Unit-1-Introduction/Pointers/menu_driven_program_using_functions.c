#include <stdio.h>

void input(int arr[], int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int sum_arr(int arr[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

float avg_arr(int arr[], int n) {
    return (float)sum_arr(arr, n) / n;
}

int min_arr(int arr[], int n) {
    int min = arr[0], i;
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int max_arr(int arr[], int n) {
    int max = arr[0], i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[100], n, choice = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    input(arr, n);

    while (choice != 5) {
        printf("\n1. Sum");
        printf("\n2. Average");
        printf("\n3. Minimum");
        printf("\n4. Maximum");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Sum = %d\n", sum_arr(arr, n));
                break;

            case 2:
                printf("Average = %.2f\n", avg_arr(arr, n));
                break;

            case 3:
                printf("Minimum = %d\n", min_arr(arr, n));
                break;

            case 4:
                printf("Maximum = %d\n", max_arr(arr, n));
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
