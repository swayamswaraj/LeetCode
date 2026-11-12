class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=1,mini=1;
        int low=0,high=1;
        while(high<n){
            if(nums[high]>nums[high-1]){
                int len=high-low+1;
                maxi=max(maxi,len);
            }
            else low=high;
            high++;
        }
        low=0,high=1;
        while(high<n){
            if(nums[high]<nums[high-1]){
                int len=high-low+1;
                mini=max(mini,len);
            }
            else low=high;
            high++;
        }
        return max(maxi,mini);
    }
};