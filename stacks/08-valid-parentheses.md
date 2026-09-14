## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used a stack to store opening brackets. Whenever a closing bracket appears, I check whether it matches the most recent opening bracket.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
The brackets must close in the correct order. An empty stack when a closing bracket appears or leftover opening brackets makes the string invalid.