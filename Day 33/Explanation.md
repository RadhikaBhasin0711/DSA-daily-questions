Problems solved:

1. Kth Smallest Element in a BST - LeetCode 230

Difficulty - Medium 

Problem Statement - 
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

Approach- 
Perform an inorder traversal (Left → Root → Right).
Use a cnt variable to count how many nodes have been visited.
When cnt == k, store the current node's value as the answer.
Stop further traversal once the answer is found.

Time Complexity- 
    Best/Average Case- O(k)
    Worst Case- O(n)
Space complexity- O(h)

2. Zigzag Conversion - LeetCode 6

Difficulty- Medium

Problem Statement- 
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows: string convert(string s, int numRows);
  
Approach - 
Initialize a vector of numRows strings to hold characters row by row.
Traverse the string s:
    Append characters to the current row.
    Change direction when the top (i == 0) or bottom (i == numRows - 1) is reached.
Concatenate all strings from the vector to get the final result.

Time Complexity- O(n)
Space complexity- O(n)
