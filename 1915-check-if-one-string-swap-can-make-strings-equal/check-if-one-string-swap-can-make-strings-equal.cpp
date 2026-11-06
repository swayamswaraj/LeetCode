class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        int x=0,c=0;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[x]){
                c++;
                mp[s1[i]]++;
                mp[s2[x]]--;
                if(mp[s1[i]]==0) mp.erase(s1[i]);
                if(mp[s2[x]]==0) mp.erase(s2[x]);
                x++;
            }
            else x++;
        }
        if((c==2||c==0)&& mp.empty()) return true;
        return false;
    }
};