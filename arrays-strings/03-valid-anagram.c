#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not an Anagram\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Valid Anagram\n");

    return 0;
}
/*
TEST CASES:

Test Case 1 - Typical:
Input:
anagram
margana
Expected Output:
Valid Anagram

Test Case 2 - Edge Case:
Input:
a
b
Expected Output:
Not an Anagram
*/