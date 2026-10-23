class Solution {
public:
    int maximum(vector<int> v){
        int m=INT_MIN;
        for(int i=0;i<v.size();i++){
            m=max(m,v[i]);
        }
        return m;
    }
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0,high=0,ans=INT_MIN;
        vector<int> v(26,0);
        while(high<n){
            v[s[high]-'A']++;
            int len=high-low+1;
            int maxi=maximum(v);
            int diff=len-maxi;
            while(diff>k){
                v[s[low]-'A']--;
                low++;
                len=high-low+1;
                maxi=maximum(v);
                diff=len-maxi;
            }
            ans=max(ans,(high-low+1));
            high++;
        }
        return ans;
    }
};