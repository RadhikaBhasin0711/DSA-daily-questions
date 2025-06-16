class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> count={{'a',0},{'b',0},{'c',0}};
        int left=0;
        int cnt=0;
        for(int right=0;right<s.length();right++){
            count[s[right]]++;

            while(count['a']>0 && count['b']>0 && count['c']>0){
                cnt+=s.length()-right;
                count[s[left]]--;
                left++;
            }
        }
        return cnt;
    }
};
