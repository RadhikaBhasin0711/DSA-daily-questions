Problems solved:

1. Odd Even Linked List - LeetCode 328

Difficulty - Medium 

Problem Statement - 
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Approach- 
Handle base cases: if the list has 0 or 1 nodes, return as is.
Initialize:
    odd pointing to the first node,
    even pointing to the second node,
    evenHead to remember the start of the even list.
Loop as long as even and even->next exist:
    Link the current odd to even->next and move odd forward.
    Link the current even to odd->next and move even forward.
After the loop, connect the last odd node to the evenHead.

Time Complexity- O(n)
Space complexity- O(1)

2. Excel Sheet Column Number - LeetCode 171

Difficulty- Easy

Problem Statement- 
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

Approach - 
Initialize result = 0.
For each character c in columnTitle:
    Convert it to its corresponding value: d = c - 'A' + 1.
    Update the result: result = result * 26 + d.
After the loop, return result.

Time Complexity- O(n)
Space complexity- O(1)
