class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> m1;
        vector<int> m2(n,0);
        m1.push_back(nums[0]);
        m2[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            if(nums[i]>m1[i-1]) m1.push_back(nums[i]);
            else m1.push_back(m1[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]<m2[i+1]) m2[i]=nums[i];
            else m2[i]=m2[i+1];
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if((m1[i]-m2[i])<=k){
                ans=i;
                return ans;
            }
        }
        return ans;
    }
};