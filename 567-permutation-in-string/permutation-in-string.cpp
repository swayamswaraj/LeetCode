class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        if(m>n) return false;
        unordered_map<char,int> req;
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            req[s1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp[s2[i]]++;
        }
        int low=0,high=m-1;
        while(high<n){
            if(req==mp) return true;
            mp[s2[low]]--;
            if(mp[s2[low]]==0) mp.erase(s2[low]);
            low++;
            high++;
            if(high==n) break;
            mp[s2[high]]++;
        }
        return false;
    }
};