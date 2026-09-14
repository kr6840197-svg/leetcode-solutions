#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char str[MAX];
    char stack[MAX];
    int top = -1;
    int i;
    int valid = 1;

    printf("Enter parentheses: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {

        // Opening brackets are pushed into the stack
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[++top] = str[i];
        }

        // Check closing brackets
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {

            // No opening bracket available
            if (top == -1) {
                valid = 0;
                break;
            }

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{')) {
                valid = 0;
                break;
            }

            top--;
        }
    }

    // Stack must be empty for valid parentheses
    if (top != -1) {
        valid = 0;
    }

    if (valid) {
        printf("Valid Parentheses\n");
    } else {
        printf("Invalid Parentheses\n");
    }

    return 0;
}