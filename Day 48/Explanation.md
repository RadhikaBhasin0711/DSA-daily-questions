Problems solved:

1. Delete the Middle Node of a Linked List - LeetCode 2095

Difficulty - Medium 

Problem Statement - 
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.
For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.

Approach- 
If the list is empty or has only one node, return nullptr.
Initialize slow, fast, and prev pointers.
    slow and fast start at head.
    prev is initially nullptr.
Traverse the list:
    Move fast by 2 steps and slow by 1 step in each iteration.
    Update prev to point to the node before slow.
When fast reaches the end:
    slow will be at the middle node.
    Update prev->next to slow->next to skip the middle node.
    Delete slow to release memory.
Return the updated head.

Time Complexity- O(n)
Space complexity- O(1)

2. Bulb Switcher - LeetCode 319

Difficulty- Medium

Problem Statement- 
There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.
On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.
Return the number of bulbs that are on after n rounds.

Approach - 
A bulb ends up on if it is toggled an odd number of times.
A bulb gets toggled once for each of its divisors. For example, bulb 12 is toggled in rounds 1, 2, 3, 4, 6, 12 (6 times, even, so it ends up off).
Only perfect squares have an odd number of divisors because one divisor (the square root) is repeated only once (e.g., 16 has divisors 1,2,4,8,16; divisor 4 counts only once).
So, the bulbs that remain on are exactly the ones in positions 1², 2², 3², ..., k² ≤ n.
Therefore, the answer is simply the count of perfect squares ≤ n, which is floor(sqrt(n)).

Time Complexity- O(1)
Space complexity- O(1)
