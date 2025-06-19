class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        //find actual sum and the sum of ele in nums. the diff is the missig ele
        int actual_sum=n*(n+1)/2;
        int arr_sum=accumulate(nums.begin(),nums.end(),0);         
        return actual_sum-arr_sum;
        return 0;
    }
};
