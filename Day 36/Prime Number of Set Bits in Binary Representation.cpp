class Solution {
private:
    int findSetBits(int n){
        int bits=0;
        while(n>0){
            if(n&1){
                bits++;
            }
            n=n>>1;
        }
        return bits;
    }

    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            int setbits=findSetBits(i);
            if(isPrime(setbits)){
                cnt++;
            }
        }
        return cnt;
    }
};
