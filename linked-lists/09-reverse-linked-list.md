## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
I used three pointers: previous, current, and next. Each node's next pointer is reversed to point to the previous node while moving through the linked list.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
An empty linked list returns NULL. It is important to save the next node before changing the current node's next pointer.