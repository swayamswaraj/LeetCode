class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> mp;
        for(int i=n-1;i>=0;i--){
            if(!mp.empty() && s[i]==mp.top()){
                mp.pop();
            }
            else mp.push(s[i]);
        }
        if(mp.empty()) return "";
        string s1;
        int m=mp.size();
        for(int i=0;i<m;i++){
            char c=mp.top();
            s1=s1+c;
            mp.pop();
        }
        return s1;
    }
};