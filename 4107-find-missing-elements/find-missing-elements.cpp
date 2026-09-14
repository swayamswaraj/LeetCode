class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        vector<int> v;
        for(int i=nums[0];i<nums[nums.size()-1];i++){
            if(i==nums[x]) x++;
            else v.push_back(i);
        }
        return v;
    }
};