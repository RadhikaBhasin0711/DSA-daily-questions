Problems solved:

1. Minimum Absolute Difference in BST - LeetCode 530

Difficulty - Easy 

Problem Statement - 
Given the root of a Binary Search Tree (BST), return the minimum absolute difference between the values of any two different nodes in the tree.

Approach- 
Define a helper function addElement() to do in-order traversal:
    Traverse left subtree.
    Add current node’s value to vector v.
    Traverse right subtree.
Call addElement() with the root to fill v with sorted values.
Initialize minDiff = INT_MAX.
Loop through v and for each pair of adjacent elements, compute abs(v[i] - v[i+1]), updating minDiff if smaller difference is found.
Return minDiff.

Time Complexity- O(n)
Space complexity- O(n)

2. Product of Array Except Self - LeetCode 238

Difficulty- Medium

Problem Statement- 
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Approach - 
Create ans array of size n, initialized with 1.
Prefix Pass:
    For each index i from 1 to n-1:
    ans[i] = ans[i-1] * nums[i-1]
    (Each ans[i] holds the product of all elements to the left of i.)
Suffix Pass:
    Initialize suffix = 1.
    For each index i from n-2 downto 0:
        Update suffix *= nums[i+1] (product of elements to the right of i).
        Update ans[i] *= suffix.
Return ans.

Time Complexity- O(n)
Space complexity- O(1)
