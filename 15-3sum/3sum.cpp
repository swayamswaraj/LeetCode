class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1,h=n-1;
            while(l<h){
                if(nums[l]+nums[h]==(-1*nums[i])){
                    ans.push_back({nums[i],nums[l],nums[h]});
                    l++;
                    h--;
                    while(l<h && nums[l]==nums[l-1]) l++;
                    while(l<h && nums[h]==nums[h+1]) h--;
                }
                else if(nums[l]+nums[h]<(-1*nums[i])) l++;
                else h--;
            }
        }
        return ans;
    }
};