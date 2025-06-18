Problems solved:

1. Count Primes - LeetCode 204

Difficulty - Medium 

Problem Statement - 
Given an integer n, return the number of prime numbers that are strictly less than n.

Approach- 
Initialize a boolean vector prime of size n+1 to true.
Set prime[0] and prime[1] to false as 0 and 1 are not primes.
Loop from 2 to n - 1:
    If prime[i] is true, increment cnt.
    Mark all multiples of i (i.e., j = i*2, i*3, ...) as false.
Return the count of prime numbers.

Time Complexity- O(n log log n)
Space complexity- O(n)

2. Single Number - LeetCode 136

Difficulty- Easy

Problem Statement- 
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Approach - 
Initialize ans = 0.
Traverse through the array:
    XOR each number with ans: ans = ans ^ nums[i].
Return ans, which holds the unique number.

Time Complexity- O(n)
Space complexity- O(1)
