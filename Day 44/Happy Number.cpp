class Solution {
public:
    bool isHappy(int n) {
        set <int> visited;
        int sum;
        int dig;

        while(true){
            sum=0;
            while(n>0){
                dig=n%10;
                sum+=dig*dig;
                n=n/10;
            }
            if(sum==1){
                return true;
            }
            else if(visited.find(sum)!=visited.end()){
                return false;
            }
            else{
                visited.insert(sum);
                n=sum;
            }
        }
        return false;
    }
};
