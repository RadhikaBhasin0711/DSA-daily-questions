Problems solved:

i. Maximum Depth of Binary Tree - LeetCode 104

Difficulty - Easy 

Problem Statement - 
Given the root of a binary tree, return its maximum depth. 
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Approach- 
If the root is NULL, return 0.
Recursively find the depth of the left subtree.
Recursively find the depth of the right subtree.
Take the maximum of the two depths and add 1 (for the current node).
Return the result.

ii. Flipping an Image - LeetCode 832

Difficulty- Easy

Problem Statement- 
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image. 
To flip an image horizontally means that each row of the image is reversed. For example, flipping [1,1,0] horizontally results in [0,1,1]. 
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0,1,1] results in [1,0,0].

Approach - 
Traverse each row of the image.
For each row, swap the elements symmetrically from both ends to flip it horizontally.
After flipping, traverse each element and invert it (change 0 to 1 and 1 to 0).
Return the modified image.
