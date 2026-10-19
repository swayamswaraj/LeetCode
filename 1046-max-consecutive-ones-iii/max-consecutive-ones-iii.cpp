class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=0,ans=INT_MIN;
        unordered_map<int,int> mp;
        while(high<n){
            mp[nums[high]]++;
            while(mp[0]>k){
                mp[nums[low]]--;
                if(mp[nums[low]]==0) mp.erase(nums[low]);
                low++;
            }
            ans=max(ans,(high-low+1));
            high++;
        }
        return ans;
    }
};