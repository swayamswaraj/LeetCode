class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int low=0,high=0,ans=INT_MIN;
        unordered_map<int,int> mp;
        while(high<n){
            mp[fruits[high]]++;
            if(mp.size()<=2){
                int len=high-low+1;
                ans=max(ans,len);
            }
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0) mp.erase(fruits[low]);
                low++;
            }
            high++;
        }
        return ans;
    }
};