Problems solved:

1. Binary Tree Right Side View - LeetCode 199

Difficulty - Medium 

Problem Statement - 
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Approach- 
Initialize an empty vector ans to store the right view.
Create a helper function solve(TreeNode* root, vector<int>& ans, int lvl).
In the helper:
    If root is NULL, return.
    If lvl == ans.size(), add root->val to ans (first node at this level).
    Recursively call solve on root->right with lvl + 1.
    Recursively call solve on root->left with lvl + 1.
Call solve(root, ans, 0) from the main function.
Return the ans vector.

2. Lexicographically Smallest Palindrome - LeetCode 2697

Difficulty- Easy

Problem Statement- 
You are given a string s consisting of lowercase English letters, and you are allowed to perform operations on it. In one operation, you can replace a character in s with another lowercase English letter.
Your task is to make s a palindrome with the minimum number of operations possible. If there are multiple palindromes that can be made using the minimum number of operations, make the lexicographically smallest one.
A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, string a has a letter that appears earlier in the alphabet than the corresponding letter in b.
Return the resulting palindrome string.

Approach - 
Initialize two pointers: i = 0 and j = s.length() - 1.
While i < j, do the following:
    Replace s[i] and s[j] with the smaller of the two characters: s[i] = s[j] = min(s[i], s[j]).
    Increment i and decrement j.
After the loop ends, return the modified string s.
