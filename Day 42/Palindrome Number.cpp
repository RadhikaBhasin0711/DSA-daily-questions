class Solution {
public:
    bool isPalindrome(int x) {
        bool isPal=false;
        int original=x;
        long ans;
        if(x==0){
            return true;
        }
        else{
            while(x>0){
                int dig=x%10;
                ans=ans*10+dig;
                if(ans==original){
                    return true;
                }
                x=x/10;
            }
        }
        
        return false;
    }
};
