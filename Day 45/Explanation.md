Problems solved:

1. Rotate List - LeetCode 61

Difficulty - Medium 

Problem Statement - 
Given the head of a linked list, rotate the list to the right by k places.

Approach- 
If the list is empty, return it.
Traverse the list to calculate its length and get the last node (temp).
Compute rotations = k % length. If it's 0, return the head (no change).
Traverse to the node just before the new head (length - rotations - 1 steps).
Break the link, set the next of the new last node to nullptr.
Connect the original tail to the old head.
Return the new head.

Time Complexity- O(n)
Space complexity- O(1)

2. Plus One - LeetCode 66

Difficulty- Easy

Problem Statement- 
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.

Approach - 
Start from the last digit and move backward.
If a digit is less than 9:
    Increment it and return the updated vector.
If the digit is 9:
    Set it to 0 and continue to the next digit.
If all digits were 9 (e.g., 999 → 1000):
    Insert 1 at the beginning of the vector.

Time Complexity- O(n)
Space complexity- O(1)
