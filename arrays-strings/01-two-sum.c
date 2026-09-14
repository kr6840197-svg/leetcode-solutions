#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found.\n");

    return 0;
}
/*
TEST CASES:

Test Case 1 - Typical:
Input:
4
2 7 11 15
9
Expected Output:
Indices: 0 1

Test Case 2 - Edge Case:
Input:
2
3 3
6
Expected Output:
Indices: 0 1
*/