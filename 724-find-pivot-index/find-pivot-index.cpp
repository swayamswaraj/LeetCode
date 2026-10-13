class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int l=0,sum=0;
        for(int x:nums){
            sum+=x;
        }
        for(int i=0;i<n;i++){
            if(i>0) l+=nums[i-1];
            int r=sum-nums[i]-l;
            if(l==r) return i;
        }
        return -1;
    }
};