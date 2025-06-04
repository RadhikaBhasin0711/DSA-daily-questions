Problems solved:

1. Lowest Common Ancestor of a Binary Tree - LeetCode 236

Difficulty - Medium 

Problem Statement - 
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a 
descendant of itself).”

Approach- 
If the current root is NULL, return NULL.
If root is equal to p or q, return root.
Recursively search for p and q in the left subtree:  
  leftAns = lowestCommonAncestor(root->left, p, q).
Recursively search for p and q in the right subtree: 
  rightAns = lowestCommonAncestor(root->right, p, q).
If both leftAns and rightAns are not NULL, return root (this is the LCA).
If only one of them is not NULL, return that one.
If both are NULL, return NULL.

Time Complexity- O(n)
Space complexity- O(h)

2. Number of Segments in a String - LeetCode 434

Difficulty- Easy

Problem Statement- 
Given a string s, return the number of segments in the string.
A segment is defined to be a contiguous sequence of non-space characters.

Approach - 
Initialize a variable count = 0.
Loop through the string from index 0 to s.length() - 1:
    If the current character is not a space and (it’s the first character or the previous character is a space), increment count.
After the loop ends, return the value of count.

Time Complexity- O(n)
Space complexity- O(1)
