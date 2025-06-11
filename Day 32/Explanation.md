Problems solved:

1. Validate Binary Search Tree - LeetCode 98

Difficulty - Medium 

Problem Statement - 
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:
  The left subtree of a node contains only nodes with keys less than the node's key.
  The right subtree of a node contains only nodes with keys greater than the node's key.
  Both the left and right subtrees must also be binary search trees.

Approach- 
Start with the range (-∞, ∞) for the root.
At each node:
    Check if node->val lies within the valid range (min < val < max).
    Recursively validate the left subtree with range (min, node->val) and right subtree with range (node->val, max).
Return true if all nodes satisfy BST conditions.

Time Complexity- O(n)
Space complexity- O(h)

2. Reverse Words in a String - LeetCode 151

Difficulty- Medium

Problem Statement- 
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Approach - 
Reverse the entire string.
Loop through the string to extract each word (separated by spaces).
Reverse each extracted word and append it to the result string with a space.
Return the result after removing the leading space.

Time Complexity- O(n)
Space complexity- O(n)
