class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long m1=nums[0],m2=LLONG_MIN,m3=LLONG_MIN;
        for(int i=1;i<n;i++){
            if(nums[i]==m1||nums[i]==m2||nums[i]==m3){
                continue;
            }
            if(nums[i]>m1){
                m3=m2;
                m2=m1;
                m1=nums[i];
            }
            else if(nums[i]>m2){
                m3=m2;
                m2=nums[i];
            }
            else if(nums[i]>m3) m3=nums[i];
        }
        if(m3==LLONG_MIN) return m1;
        return m3;
    }
};