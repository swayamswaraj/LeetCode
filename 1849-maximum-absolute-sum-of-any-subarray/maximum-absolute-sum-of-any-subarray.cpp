class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        int ans=abs(nums[0]);
        for(int i=1;i<n;i++){
            int v1=maxi+nums[i];
            int v2=mini+nums[i];
            maxi=max(v1,nums[i]);
            mini=min(v2,nums[i]);
            ans=max(ans,max(maxi,abs(mini)));
        }
        return ans;
    }
};