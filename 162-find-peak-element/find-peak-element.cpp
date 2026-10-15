class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid+1>=n && mid-1<0) return mid;
            else if(mid+1>=n){
                if(nums[mid]>nums[mid-1]) return mid;
            }
            else if(mid-1<0){
                if(nums[mid]>nums[mid+1]) return mid;
            }
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            else if(nums[mid]<nums[mid+1]) low=mid+1;
            else high=mid-1;
        }
        return 0;
    }
};