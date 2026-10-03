class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(s.size()<3) return *s.rbegin();
        s.erase(--s.end());
        s.erase(--s.end());
        return *s.rbegin();
    }
};