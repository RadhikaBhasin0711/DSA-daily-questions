Problems solved:

1. Insert into a Binary Search Tree - LeetCode 701

Difficulty - Medium 

Problem Statement - 
You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

Approach- 
Create a new node with the given value.
If the root is NULL, return the new node.
If the value is greater than the current node's value:
    Recursively insert into the right subtree.
Else:
    Recursively insert into the left subtree.
Return the root after insertion.

Time Complexity- O(h)
Space complexity- O(h)

2. Remove All Adjacent Duplicates In String - LeetCode 1047

Difficulty- Easy

Problem Statement- 
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

Approach - 
Initialize an empty string result.
Loop through each character 'ch' in the input string s:
    If result is empty or its last character is not equal to ch, append ch to result.
    Else, a duplicate is found — remove the last character using pop_back().
After the loop, return the final result string.

Time Complexity- O(n)
Space complexity- O(n)
