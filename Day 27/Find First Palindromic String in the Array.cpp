class Solution {
public:
    bool isPalindrome(string st){
        int l=0;
        int r=st.length()-1;

        while(l<r){
            if(st[l]==st[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};
