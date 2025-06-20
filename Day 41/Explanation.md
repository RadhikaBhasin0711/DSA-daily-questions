Problems solved:

1. Merge Two Sorted Lists - LeetCode 21

Difficulty - Easy 

Problem Statement - 
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.

Approach- 
If either list1 or list2 is null, return the other.
Identify which list has the smaller head and start with that list.
Use two pointers (curr1, next1) to traverse the first list, and (curr2, next2) for the second list.
If curr2's value fits between curr1 and next1, insert it in-between.
Otherwise, move curr1 and next1 forward.
If the end of the first list is reached, directly append the remaining curr2 nodes.

Time Complexity- O(n + m), where n and m are the lengths of the two input lists
Space complexity- O(1)

2. Perfect Number - LeetCode 507

Difficulty- Easy

Problem Statement- 
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
Given an integer n, return true if n is a perfect number, otherwise return false.

Approach - 
If num <= 1, return false (1 is not a perfect number).
Initialize sum = 1 (1 is a divisor of every number).
Loop from 2 to sqrt(num):
    If num % i == 0, add i and num / i to the sum.
    To avoid adding square roots twice (like 4 for i=2), only add num/i when i*i != num.
Finally, return true if sum == num.

Time Complexity- O(√n)
Space complexity- O(1)
