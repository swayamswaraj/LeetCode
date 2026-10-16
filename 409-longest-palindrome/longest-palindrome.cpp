class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto x:mp){
            ans+=x.second/2;
        }
        ans*=2;
        if(ans<n) return ans+1;
        return ans;
    }
};