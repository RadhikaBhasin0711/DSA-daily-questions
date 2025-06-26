Problems solved:

1. Swapping Nodes in a Linked List - LeetCode 1721

Difficulty - Medium 

Problem Statement - 
You are given the head of a linked list, and an integer k.
Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

Approach- 
Traverse the list to compute its length L.
Traverse again to get the k-th node from the start (n1) and (L - k + 1)-th node from the start, which is the k-th node from the end (n2).
Swap the values of n1 and n2.
Return the modified head.

Time Complexity- O(n)
Space complexity- O(1)

2. Nth Digit - LeetCode 400

Difficulty- Medium

Problem Statement- 
Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...].

Approach - 
Initialize digit = 9, first = 1, and length = 1 to start with 1-digit numbers.
While n > digit * length, subtract that group’s total digits from n, and move to the next group (e.g., 2-digit, 3-digit numbers).
After finding the digit range:
    Calculate the actual number: first + (n - 1) / length.
    Convert the number to string and return the digit at position (n - 1) % length.

Time Complexity- O(log n)
Space complexity- O(log n)
