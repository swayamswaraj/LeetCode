class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,c=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int d=sum-k;
            c+=mp[d];
            mp[sum]++;
        }
        return c;
    }
};