class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double ans=INT_MIN,avg,sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=sum/k;
        ans=max(ans,avg);
        int low=0,high=k-1;
        while(high<n){
            high++;
            low++;
            if(high==n) break;
            sum=sum-nums[low-1]+nums[high];
            avg=sum/k;
            ans=max(ans,avg);
        }
        return ans;
    }
};