class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,c=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int d=(sum%k+k)%k;
            c+=mp[d];
            mp[d]++;
        }
        return c;
    }
};