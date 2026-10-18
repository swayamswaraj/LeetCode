class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX,sum=0,low=0,high=0;
        while(high<n){
            sum+=nums[high];
            while(sum>=target){
                int len=high-low+1;
                ans=min(ans,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};