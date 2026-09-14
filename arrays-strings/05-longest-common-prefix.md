## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I compare characters at the same position across all strings. The comparison stops when a character differs or when the end of one string is reached.

### Complexity
- Time: O(n × m)
- Space: O(1)

### Notes
If there is no common prefix, the result is an empty string. The shortest string limits the maximum possible prefix length.