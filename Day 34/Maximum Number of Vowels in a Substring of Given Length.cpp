class Solution {
private:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        else return false;
    }
public:
    int maxVowels(string s, int k) {
        int maxCnt=0;
        int left=0;
        int cnt=0;
        for(int right=0;right<s.length();right++){
            if(isVowel(s[right])){
                cnt++;
            }
            if((right-left+1)==k){
                maxCnt=max(maxCnt,cnt);
                if(isVowel(s[left])){
                    cnt--;
                }
                left++;
            }
        }
        return maxCnt;
    }
};
