#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
/*
TEST CASES:

Test Case 1 - Typical:
Input:
5
64 34 25 12 22
Expected Output:
Sorted array: 12 22 25 34 64

Test Case 2 - Edge Case:
Input:
5
1 2 3 4 5
Expected Output:
Sorted array: 1 2 3 4 5
*/