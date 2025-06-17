class Solution {
public:
    int getGCD(int a,int b){
        if(b==0){
            return a;
        }
        return getGCD(b,a%b);
    }
    bool isGoodArray(vector<int>& nums) {
        int GCD=nums[0];
        for(int i=1;i<nums.size();i++){
            GCD=getGCD(GCD,nums[i]);
        }
        if(GCD==1){
            return true;
        }
        return false;
    }
};
