class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0,high=n-1,s,e;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                s=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                e=mid;
                low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        vector<int> v;
        while(s<=e){
            v.push_back(s);
            s++;
        } 
        return v;
    }
};