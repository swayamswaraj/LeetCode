class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        int low=0,high=1,ans=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]=='1') v.push_back(1);
            else v.push_back(0);
        }
        while(high<n){
            if(v[high]!=v[high-1]){
                int len=high-low;
                if(len % 2!=0){
                    v[high]=!v[high];
                    ans++;
                    low=high+1;
                    high=high+2;
                    if(high>=n){
                        break;
                    }
                    continue;
                }
                else low=high;
            }
            high++;
        }
        return ans;
    }
};