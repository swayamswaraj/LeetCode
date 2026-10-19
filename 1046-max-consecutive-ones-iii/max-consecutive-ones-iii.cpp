class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=0,zero=0,ans=INT_MIN;
        while(high<n){
            if(nums[high]==0) zero++;
            while(zero>k){
                if(nums[low]==0) zero--;
                low++;
            }
            ans=max(ans,(high-low+1));
            high++;
        }
        return ans;
    }
};