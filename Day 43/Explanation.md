Problems solved:

1. Palindrome Linked List - LeetCode 234

Difficulty - Easy 

Problem Statement - 
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Approach- 
Create an empty vector V.
Traverse the linked list and push each node’s value into the vector.
Initialize two pointers:
    left = 0
    right = V.size() - 1
While left < right, compare V[left] and V[right]:
    If they differ, return false.
    Else, move both pointers inward.
If all comparisons pass, return true.

Time Complexity- O(n)
Space complexity- O(n)

2. Valid Perfect Square - LeetCode 367

Difficulty- Easy

Problem Statement- 
Given a positive integer num, return true if num is a perfect square or false otherwise.
A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
You must not use any built-in library function, such as sqrt.

Approach - 
If num < 1, return false (since perfect squares are ≥ 1).
Initialize start = 1 and end = num / 2 + 1.
Perform binary search:
    Calculate mid = (start + end) / 2.
    If mid * mid == num, return true.
    If mid * mid > num, move search to the left (end = mid - 1).
    If mid * mid < num, move search to the right (start = mid + 1).
If no perfect square found, return false.

Time Complexity- O(log n)
Space complexity- O(1)
