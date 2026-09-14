## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach
I used two pointers, one starting from the beginning and the other from the end of the string. The characters at both positions are swapped until the pointers meet.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The string is reversed in-place, so no extra string is required. For a single-character string, the result remains unchanged.