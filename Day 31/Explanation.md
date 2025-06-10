Problems solved:

1. Delete Node in a BST - LeetCode 450

Difficulty - Medium 

Problem Statement - 
Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.
Basically, the deletion can be divided into two stages:
  i. Search for a node to remove.
  ii. If the node is found, delete the node.

Approach- 
Search for the node with value key.
If found:
    No child: delete and return NULL.
    One child: return the non-null child after deleting the node.
    Two children:
        Find in-order successor (minimum in right subtree).
        Replace current node’s value with successor's.
        Recursively delete the in-order successor.
Recurse left or right depending on BST property.

Time Complexity- O(h)
Space complexity- O(h)

2. Longest Common Prefix - LeetCode 14

Difficulty- Easy

Problem Statement- 
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Approach - 
Initialize pref as the first string in the vector.
Loop through the rest of the strings:
    While the current string does not start with pref, reduce pref by one character from the end.
    If pref becomes empty at any point, return "".
After checking all strings, return pref.

Time Complexity- O(n*m) where n = number of strings and m = length of the shortest string.
Space complexity- O(1)
