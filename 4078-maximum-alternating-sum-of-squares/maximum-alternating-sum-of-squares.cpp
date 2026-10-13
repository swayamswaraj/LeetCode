class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]=-1*nums[i];
        }
        sort(nums.begin(),nums.end());
        int l=0,h=n-1;
        long long ans=0;
        while(l<=h){
            if(l==h) ans+=nums[h]*nums[h];
            ans+=nums[h]*nums[h];
            ans-=nums[l]*nums[l];
            l++;
            h--;
        }
        return ans;
    }
};