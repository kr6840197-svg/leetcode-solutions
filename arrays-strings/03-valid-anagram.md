## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a frequency-count array to count how many times each character occurs in both strings. If the counts match for every character, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
If the two strings have different lengths, they cannot be anagrams. The approach works efficiently because the character set is limited.