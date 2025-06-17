Problems solved:

1. Check If It Is a Good Array - LeetCode 1250

Difficulty - Hard 

Problem Statement - 
Given an array nums of positive integers. Your task is to select some subset of nums, multiply each element by an integer and add all these numbers. The array is said to be good if you can obtain a sum of 1 from the array by any possible subset and multiplicand.
Return True if the array is good otherwise return False.

Approach- 
Initialize GCD as the first element of the array.
Loop through the rest of the elements:
    At each step, update GCD = gcd(GCD, nums[i]).
After the loop, if the GCD is 1, return true; else return false.
->This is based on the number theory principle: a set of integers is "good" (i.e., linear combination gives 1) iff their GCD is 1.

Time Complexity- O(n × log M) where n is the number of elements and M is the maximum element in the array (due to gcd calls).
Space complexity- O(1)

2. Hamming Distance - LeetCode 461

Difficulty- Easy

Problem Statement- 
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, return the Hamming distance between them.

Approach - 
Compute ans = x ^ y — this gives a binary number with 1s where bits differ.
Initialize count = 0.
Loop while ans > 0:
    Increment count if the last bit is 1 using ans & 1.
    Right shift ans by 1 (ans >>= 1).
Return count.

Time Complexity- O(1)
Space complexity- O(1)
