class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push({s[i],1});
            }
            else if(st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else if(st.top().second!=k-1){
                int num=st.top().second;
                num++;
                st.pop();
                st.push({s[i],num});
            }
            else st.pop();
        }
        string s1="";
        int m=st.size();
        for(int i=0;i<m;i++){
            s1.append(st.top().second,st.top().first);
            st.pop();
        }
        return s1;
    }
};