## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
I used a brute-force approach with two nested loops. Each pair of elements is checked to see whether their sum equals the target value.

### Complexity
- Time: O(n²)
- Space: O(1)

### Notes
The indices must be different, so the inner loop starts from i + 1. An optimized approach using a hash table can reduce the time complexity to O(n).