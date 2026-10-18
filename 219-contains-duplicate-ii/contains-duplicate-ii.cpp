class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=k;
        unordered_map<int,int> mp;
        for(int i=0;i<=high && i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2) return true;
        }
        while(high<n){
            high++;
            low++;
            if(high==n) break;
            mp[nums[low-1]]--;
            mp[nums[high]]++;
            if(mp[nums[high]]==2) return true;
        }
        return false;
    }
};