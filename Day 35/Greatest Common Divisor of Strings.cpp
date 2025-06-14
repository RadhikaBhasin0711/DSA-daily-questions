class Solution {
private:
    int getGCD(int a, int b){
        if(b==0){
            return a;
        }
        return getGCD(b,a%b);
    }

public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1){
            return "";
        }
        int a = str1.length();
        int b = str2.length();

        int gcd = getGCD(str1.length(), str2.length());
        return str1.substr(0, gcd);
    }
};
