Problems solved:

1. Remove Linked List Elements - LeetCode 203

Difficulty - Easy 

Problem Statement - 
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

Approach- 
Create a dummy node with next pointing to head.
Initialize a pointer curr to the dummy node.
Traverse while curr and curr->next are not nullptr:
    If curr->next->val == val, remove the node by curr->next = curr->next->next.
    Else, move curr = curr->next.
Return dummy->next.

Time Complexity- O(n)
Space complexity- O(1)

2. Happy Number - LeetCode 202

Difficulty- Easy

Problem Statement- 
Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
    Starting with any positive integer, replace the number by the sum of the squares of its digits.
    Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
    Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Approach - 
Initialize an empty set visited to store previously seen sums.
Loop indefinitely:
    Set sum = 0.
    Extract each digit of n, square it, and add to sum.
    If sum == 1, return true.
    If sum is already in visited, return false (cycle detected).
    Otherwise, insert sum into visited and update n = sum.

Time Complexity- O(1)
Space complexity- O(1)
