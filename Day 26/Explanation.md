Problems solved:

1. Sum Root to Leaf Numbers - LeetCode 129

Difficulty - Medium 

Problem Statement - 
You are given the root of a binary tree containing digits from 0 to 9 only.
Each root-to-leaf path in the tree represents a number.
For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.
A leaf node is a node with no children.

Approach- 
Define a recursive function solve(TreeNode* root, int curr):
    If root is NULL, return 0.
    Update curr by curr = curr * 10 + root->val.
    If the current node is a leaf node (no left or right child), return curr.
    Recursively call the function for the left and right subtrees and return their sum.
In the main function, call solve(root, 0) and return the result.

Time Complexity- O(n)
Space complexity- O(h)

2. Reverse Vowels of a String - LeetCode 345

Difficulty- Easy

Problem Statement- 
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Approach - 
Initialize two pointers: left = 0 and right = s.length() - 1.
While left < right:
    If both s[left] and s[right] are vowels, swap them and move both pointers inward.
    If s[left] is not a vowel, increment left.
    If s[right] is not a vowel, decrement right.
Return the modified string after the loop.

Time Complexity- O(n)
Space complexity- O(1)
