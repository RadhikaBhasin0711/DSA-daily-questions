Problems solved:

1. Flatten Binary Tree to Linked List - LeetCode 114

Difficulty - Medium 

Problem Statement - 
Given the root of a binary tree, flatten the tree into a "linked list":
The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree.

Approach- 
Initialize a pointer curr to the root of the tree.
While curr is not NULL, repeat the following steps:
    If curr has a left child:
        Find the rightmost node (pred) in the left subtree of curr.
        Set pred->right to curr->right (connect right subtree to the rightmost node of the left subtree).
        Move the left subtree to the right: curr->right = curr->left.
        Set curr->left = NULL to disconnect the left link.
    Move curr to curr->right to continue the process.
The tree is now flattened in-place to a right-skewed linked list.

Time Complexity- O(n)
Space complexity- O(1)

2. Length of Last Word - LeetCode 58

Difficulty- Easy

Problem Statement- 
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Approach - 
Initialize end to the last index of the string s.
Move end backward while s[end] is a space to skip trailing spaces.
Set start = end.
Move start backward while s[start] is not a space and start >= 0 to find the start of the last word.
Return end - start, which gives the length of the last word.

Time Complexity- O(n)
Space complexity- O(1)
