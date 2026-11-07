class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int v1=maxi+nums[i];
            maxi=max(v1,nums[i]);
            ans=max(ans,maxi);
        }
        return ans;
    }
};