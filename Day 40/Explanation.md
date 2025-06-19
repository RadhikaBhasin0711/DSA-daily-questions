Problems solved:

1. Reverse Linked List - LeetCode 206

Difficulty - Easy 

Problem Statement - 
Given the head of a singly linked list, reverse the list, and return the reversed list.

Approach- 
If the list is empty or has only one node, return head.
Initialize:
    prev = NULL
    curr = head
Iterate while curr is not NULL:
    Store next node in forward = curr->next
    Reverse the link: curr->next = prev
    Move prev = curr and curr = forward
Return prev (new head of the reversed list)

Time Complexity- O(n)
Space complexity- O(1)

2. Missing Number - LeetCode 286

Difficulty- Easy

Problem Statement- 
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Approach - 
Let n = nums.size().
Calculate the expected sum of numbers from 0 to n:
    actual_sum = n * (n + 1) / 2
Compute the sum of all elements in the array using accumulate:
    arr_sum = sum of elements in nums
Return the difference: actual_sum - arr_sum

Time Complexity- O(n)
Space complexity- O(1)
