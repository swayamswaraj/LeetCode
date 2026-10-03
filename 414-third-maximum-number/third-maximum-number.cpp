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


        // int m1=nums[0],m2=INT_MIN,m3=INT_MIN;
        // for(int i=1;i<n;i++){
        //     if(nums[i]>m1){
        //         m3=m2;
        //         m2=m1;
        //         m1=nums[i];
        //     }
        //     else if(nums[i]>m2){
        //         m3=m2;
        //         m2=nums[i];
        //     }
        //     else if(nums[i]>m3) m3=nums[i];
        // }
        // if(m3==INT_MIN) return m1;
        // return m3;
    }
};