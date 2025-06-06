Problems solved:

1. Binary Tree Zigzag Level Order Traversal - LeetCode 103

Difficulty - Medium 

Problem Statement - 
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

Approach- 
If the tree is empty, return an empty vector.
Initialize a queue and push the root node.
Set a boolean flag leftToRight = true to control the zigzag direction.
While the queue is not empty:
    Get the number of nodes at the current level.
    Create a temporary vector ans of size levelSize.
    For each node at this level:
        Pop the front node.
        Determine the index to insert the value:
            If leftToRight is true, insert at i
            Else, insert at size - i - 1
        Push the left and right children (if present) into the queue.
    After processing the level, toggle the leftToRight flag.
    Push ans into the final result vector.
Return the result vector after all levels are processed.

Time Complexity- O(n)
Space complexity- O(n)

2. Find First Palindromic String in the Array - LeetCode 2108

Difficulty- Easy

Problem Statement- 
Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".
A string is palindromic if it reads the same forward and backward.

Approach - 
Define a helper function isPalindrome(string st):
    Initialize two pointers: l = 0, r = st.length() - 1.
    While l < r, check:
        If st[l] != st[r], return false.
        Otherwise, increment l and decrement r.
    If the loop completes, return true.
In the main function firstPalindrome:
    Loop through the words vector.
    For each word, check if it’s a palindrome using isPalindrome().
    If it is, return that word.
    If no palindrome is found in the entire list, return an empty string.
    
Time Complexity- O(n*m) where n = number of words and m = average length of each word
Space complexity- O(1)
