Problems solved:

1. Linked List Cycle - LeetCode 141

Difficulty - Easy 

Problem Statement - 
Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false.

Approach- 
Initialize two pointers: slow and fast, both pointing to the head of the linked list.
Traverse the list:
    Move slow by one node.
    Move fast by two nodes.
    If at any point slow == fast, a cycle is detected — return true.
If fast reaches the end (NULL), there is no cycle — return false.

Time Complexity- O(n)
Space complexity- O(1)

2. Palindrome Number - LeetCode 9

Difficulty- Easy

Problem Statement- 
Given an integer x, return true if x is a palindrome, and false otherwise.

Approach - 
If the number is negative, return false (negative numbers aren't palindromes).
Store the original number in a separate variable.
Reverse the number:
    Extract digits using modulus (x % 10).
    Build the reversed number using ans = ans * 10 + digit.
    Divide x by 10 to move to the next digit.
After the loop, compare the reversed number with the original.
Return true if they match, otherwise false.

Time Complexity- O(log n)
Space complexity- O(1)
