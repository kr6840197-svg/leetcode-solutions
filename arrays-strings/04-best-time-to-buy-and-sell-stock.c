#include <stdio.h>

int main() {
    int prices[100], n;
    int i;
    int minPrice, maxProfit = 0;
    int profit;

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter stock prices:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    minPrice = prices[0];

    for (i = 1; i < n; i++) {
        profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}
/*
TEST CASES:

Test Case 1 - Typical:
Input:
6
7 1 5 3 6 4
Expected Output:
Maximum Profit: 5

Test Case 2 - Edge Case:
Input:
5
7 6 4 3 1
Expected Output:
Maximum Profit: 0
*/