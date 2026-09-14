#include <stdio.h>

int main() {
    int arr[100], n, target;
    int left, right, mid;
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        printf("Target found at index: %d\n", found);
    }
    else {
        printf("Target not found\n");
    }

    return 0;
}
/*
TEST CASES:

Test Case 1 - Typical:
Input:
5
1 3 5 7 9
7
Expected Output:
Target found at index: 3

Test Case 2 - Edge Case:
Input:
5
1 3 5 7 9
8
Expected Output:
Target not found
*/