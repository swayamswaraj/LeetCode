class Solution {
public:
    bool sahi(unordered_map<char,int>& r, unordered_map<char,int>& m){
        for(auto x:r){
            if (m[x.first]<x.second) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int> req;
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            req[t[i]]++;
        }
        int low=0,high=0;
        int ans=INT_MAX,start;
        string s1;
        while(high<n){
            mp[s[high]]++;
            while(sahi(req,mp)){
                int len=high-low+1;
                if(len<ans){
                    ans=len;
                    start=low;
                }
                mp[s[low]]--;
                if(mp[s[low]]==0) mp.erase(s[low]);
                low++;
            }
            high++;
        }
        if(ans==INT_MAX) return "";
        return s.substr(start,ans);
    }
};