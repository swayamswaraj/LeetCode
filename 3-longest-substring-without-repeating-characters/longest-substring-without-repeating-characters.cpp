class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int low=0,high=0,ans=INT_MIN;
        unordered_map<char,int> mp;
        while(high<n){
            mp[s[high]]++;
            while(mp[s[high]]==2){
                mp[s[low]]--;
                if(mp[s[low]]==0) mp.erase(s[low]);
                low++;
            }
            int len=mp.size();
            ans=max(ans,len);
            high++;
        }
        if(ans==INT_MIN) return 0;
        return ans;
    }
};