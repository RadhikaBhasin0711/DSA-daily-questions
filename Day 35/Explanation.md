Problems solved:

1. Greatest Common Divisor of Strings - LeetCode 1017

Difficulty - Easy 

Problem Statement - 
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Approach- 
Check if (str1 + str2) == (str2 + str1):
    If not, return "" since no common base string exists.
Find the GCD of str1.length() and str2.length() using Euclidean Algorithm.
Return the substring of str1 from index 0 to gcd as the result.

Time Complexity- O(n+m) 
Space complexity- O(n+m) where n = length of str1 and m = length of str2

2. Find the Town Judge - LeetCode 997

Difficulty- Easy

Problem Statement- 
In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.
If the town judge exists, then:
    1. The town judge trusts nobody.
    2. Everybody (except for the town judge) trusts the town judge.
    3. There is exactly one person that satisfies properties 1 and 2.
You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.
Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

Approach - 
Initialize two vectors indegree and outdegree of size n+1 to track trust relationships.
Loop through the trust array:
    For each pair [u, v], increment outdegree[u] and indegree[v].
Iterate from 1 to n:
    If indegree[i] == n - 1 and outdegree[i] == 0, return i (judge found).
If no such person exists, return -1.

Time Complexity- O(t+n) where t = number of trust relationships and n = number of people (to check each one for judge conditions)
Space complexity- O(n)
