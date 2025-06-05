class Solution {
public:
    bool isVowel(char ch){
        char c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;

        while(left<right){
            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isVowel(s[left])){
                left++;
            }
            else{
                right--;
            }
        }
        return s;
    }
};
