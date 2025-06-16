Problems solved:

1. Number of Substrings Containing All Three Characters - LeetCode 1358

Difficulty - Medium 

Problem Statement - 
Given a string s consisting only of characters a, b and c.
Return the number of substrings containing at least one occurrence of all these characters a, b and c.

Approach- 
Initialize a hash map to count characters 'a', 'b', and 'c'.
Use two pointers:
    right expands the window.
    left contracts it when all three characters are present.
For every valid window (all 'a', 'b', 'c' present):
    Add s.length() - right to the result, because all substrings from current left to end are valid.
    Shrink window from left to find next valid start.

Time Complexity- O(n)
Space complexity- O(1)

2. Number of 1 Bits - LeetCode 191

Difficulty- Easy

Problem Statement- 
Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

Approach - 
Initialize a counter to 0.
While n is not zero:
    Check if the last bit is 1 using (n & 1).
    If yes, increment the count.
    Right-shift n by 1 (n >> 1) to examine the next bit.
Return the count after the loop ends.

Time Complexity- O(1)
Space complexity- O(1)
