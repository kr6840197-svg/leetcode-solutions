## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used binary search on the sorted array by maintaining left and right boundaries. The middle element is compared with the target, and half of the search space is eliminated after each comparison.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
The input array must be sorted in ascending order. If the target is not found, the function returns -1.