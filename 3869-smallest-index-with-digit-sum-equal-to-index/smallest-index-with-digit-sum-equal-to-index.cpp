class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int c=0;
            while(a>0){
                c+=a%10;
                a/=10;
            }
            if(c==i) return i;
        }
        return -1;
    }
};