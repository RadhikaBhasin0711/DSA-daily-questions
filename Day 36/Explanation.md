Problems solved:

1. Find Center of Star Graph - LeetCode 1791

Difficulty - Easy 

Problem Statement - 
There is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where there is one center node and exactly n - 1 edges that connect the center node with every other node.
You are given a 2D integer array edges where each edges[i] = [ui, vi] indicates that there is an edge between the nodes ui and vi. Return the center of the given star graph.

Approach- 
Let edges be the list of undirected edges.
Compare:
    If edges[0][0] == edges[1][0] or edges[0][0] == edges[1][1], then return edges[0][0]
    Else, return edges[0][1]
No need to check all edges; 2 edges are enough to find the center.

Time Complexity- O(1)
Space complexity- O(1)

2. Prime Number of Set Bits in Binary Representation - LeetCode 762

Difficulty- Easy

Problem Statement- 
Given two integers left and right, return the count of numbers in the inclusive range [left, right] having a prime number of set bits in their binary representation.
Recall that the number of set bits an integer has is the number of 1's present when written in binary.
For example, 21 written in binary is 10101, which has 3 set bits.

Approach - 
Define findSetBits(n):
    Count bits using: while(n > 0) { if(n & 1) count++; n >>= 1; }
Define isPrime(x):
    Return false for x ≤ 1
    Check divisibility from 2 to √x
Loop through i = left to right:
    Count set bits of i using findSetBits
    Check if it's prime using isPrime
    If yes, increment the counter.

Time Complexity- O(R * logN + √K) where R = right - left + 1, logN to count bits, √K for prime check
Space complexity- O(1)
