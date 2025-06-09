class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        //double the string and see if goal exists or not
        if((s + s).find(goal) != string::npos){
            return true;
        } 
        else{
            return false;
        }
    }
};
