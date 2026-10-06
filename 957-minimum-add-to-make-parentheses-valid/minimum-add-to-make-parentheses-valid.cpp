class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<int> v;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') v.push(s[i]);
            else if(!v.empty() && s[i]==')') v.pop();
            else if(v.empty() && s[i]==')') c++;
        }
        if(!v.empty()) return v.size()+c;
        return c; 
    }
};