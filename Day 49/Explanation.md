Problems solved:

1. Minimum Size Subarray Sum - LeetCode 209

Difficulty - Medium 

Problem Statement - 
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Approach- 
Initialize pointers i and j to 0, sum = 0, and minLen = INT_MAX.
Iterate j over the array:
    Add nums[j] to sum.
    While sum ≥ target:
        Update minLen with the current window size j - i + 1.
        Subtract nums[i] from sum and increment i to shrink the window.
After the loop, if minLen is still INT_MAX, return 0 (no subarray found). Otherwise, return minLen.

Time Complexity- O(n)
Space complexity- O(1)

2. Simplify Path - LeetCode 71

Difficulty- Medium

Problem Statement- 
You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. Your task is to transform this absolute path into its simplified canonical path.

The rules of a Unix-style file system are as follows:
A single period '.' represents the current directory.
A double period '..' represents the previous/parent directory.
Multiple consecutive slashes such as '//' and '///' are treated as a single slash '/'.
Any sequence of periods that does not match the rules above should be treated as a valid directory or file name. For example, '...' and '....' are valid directory or file names.

The simplified canonical path should follow these rules:
The path must start with a single slash '/'.
Directories within the path must be separated by exactly one slash '/'.
The path must not end with a slash '/', unless it is the root directory.
The path must not have any single or double periods ('.' and '..') used to denote current or parent directories.
Return the simplified canonical path.

Approach - 
Initialize an empty stack to store valid directory names.
Split the input path string by / using a stringstream.
For each token:
    Skip if it is empty or ".".
    If it is "..", pop from the stack if it is not empty.
    Otherwise, push the token onto the stack.
After processing all tokens:
    If the stack is empty, return "/".
    Otherwise, concatenate all elements from bottom to top, separating them with /.

Time Complexity- O(n)
Space complexity- O(n)
