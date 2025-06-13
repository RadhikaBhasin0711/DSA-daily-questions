Problems solved:

1. Convert Sorted List to Binary Search Tree - LeetCode 109

Difficulty - Medium 

Problem Statement - 
Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height-balanced binary search tree.

Approach- 
Base Cases:
    If head == NULL, return NULL.
    If head->next == NULL, return a new TreeNode with that value.

Find Middle Element:
    Use slow and fast pointers to find the middle (slow) and its previous node (slow_prev).
    The middle node will be the root of the BST.
    Break the list into two halves by setting slow_prev->next = NULL.

Recursive Calls:
    Recursively build the left subtree using the left half of the list (head to slow_prev).
    Recursively build the right subtree using slow->next.

Return the root node.

Time Complexity- O(n logn)
Space complexity- O(logn)

2. Maximum Number of Vowels in a Substring of Given Length - LeetCode 1456

Difficulty- Medium

Problem Statement- 
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Approach - 
Initialize left, cnt, and maxCnt to 0.
Iterate with right over the string:
    If s[right] is a vowel, increment cnt.
    Once window size equals k, update maxCnt.
    If s[left] is a vowel, decrement cnt (as it's leaving the window).
    Increment left to maintain window size.
Return maxCnt after traversing the string.

Time Complexity- O(n)
Space complexity- O(1)
