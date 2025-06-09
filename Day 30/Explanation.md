Problems solved:

1. Lowest Common Ancestor of a Binary Search Tree - LeetCode 235

Difficulty - Medium 

Problem Statement - 
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

Approach- 
Identify the smaller and larger values between p->val and q->val (low, high).
Traverse the BST from the root:
    If root->val is greater than high, move to the left subtree.
    If root->val is less than low, move to the right subtree.
    Otherwise, this node lies between p and q, so it is their LCA.
Return the node where the above condition is satisfied.

Time Complexity- O(h)
Space complexity- O(1)

2. Rotate String - LeetCode 796

Difficulty- Easy

Problem Statement- 
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.

Approach - 
If lengths of s and goal differ, return false.
Concatenate s with itself (i.e., s + s).
Use .find(goal) to check if goal exists in the new string.
If found, return true; otherwise, return false.

Time Complexity- O(n)
Space complexity- O(n)
