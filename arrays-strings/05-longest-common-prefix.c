#include <stdio.h>
#include <string.h>

int main() {
    char words[100][100];
    int n, i, j;
    int minLength;
    int prefixLength = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    minLength = strlen(words[0]);

    for (i = 1; i < n; i++) {
        if (strlen(words[i]) < minLength) {
            minLength = strlen(words[i]);
        }
    }

    for (j = 0; j < minLength; j++) {
        for (i = 1; i < n; i++) {
            if (words[0][j] != words[i][j]) {
                printf("Longest Common Prefix: ");
                
                if (prefixLength == 0) {
                    printf("No common prefix");
                } else {
                    for (int k = 0; k < prefixLength; k++) {
                        printf("%c", words[0][k]);
                    }
                }

                printf("\n");
                return 0;
            }
        }

        prefixLength++;
    }

    printf("Longest Common Prefix: ");

    if (prefixLength == 0) {
        printf("No common prefix");
    } else {
        for (i = 0; i < prefixLength; i++) {
            printf("%c", words[0][i]);
        }
    }

    printf("\n");

    return 0;
}
/*
TEST CASES:

Test Case 1 - Typical:
Input:
3
flower flow flight
Expected Output:
Longest Common Prefix: fl

Test Case 2 - Edge Case:
Input:
3
dog racecar car
Expected Output:
Longest Common Prefix: No common prefix
*/