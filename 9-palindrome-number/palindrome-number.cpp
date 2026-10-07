class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        if(x < 0) return false;
        s = to_string(x);
        string reverse = "";
        for(int i = s.length() - 1; i >= 0; i--){
            reverse += s[i];
        }
        if(s == reverse){
            return true;
        }
        return false;
    }
};