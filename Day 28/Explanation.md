Problems solved:

1. Search in a Binary Search Tree - LeetCode 700

Difficulty - Easy 

Problem Statement - 
You are given the root of a binary search tree (BST) and an integer val.
Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

Approach- 
If the root is NULL, return NULL (base case: value not found).
If root->val == val, return the current node (value found).
If val < root->val, recursively search in the left subtree.
Otherwise, recursively search in the right subtree.

Time Complexity- O(h)
Space complexity- O(h)

2. Valid Palindrome - LeetCode 125

Difficulty- Easy

Problem Statement- 
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Approach - 
Initialize two pointers: l = 0, r = s.length() - 1.
While l < r:
    Skip non-alphanumeric characters from the left: while(l < r && !isalnum(s[l])) l++;
    Skip non-alphanumeric characters from the right: while(l < r && !isalnum(s[r])) r--;
    Compare lowercase characters: if tolower(s[l]) != tolower(s[r]), return false.
    Move both pointers inward: l++, r--.
If all characters match, return true.

Time Complexity- O(n)
Space complexity- O(1)
