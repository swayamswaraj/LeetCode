class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int c=0,sum=0,mini=nums[0];
        bool flag=false;
        for(int i=0;i<n;i++){
            if(nums[i]==0) flag=true;
            c+=nums[i];
            sum=max(sum,c);
            mini=max(mini,nums[i]);
            if(c<0) c=0;
        }
        if(sum==0&&flag==true) return 0;
        else if(sum==0) return mini;
        else return sum;
    }
};