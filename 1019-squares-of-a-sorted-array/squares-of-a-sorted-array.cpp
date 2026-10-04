class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        int low=0,high=n-1,i=n-1;
        while(low<=high){
            if(abs(nums[low])<=abs(nums[high])){
                v[i]=nums[high]*nums[high];
                i--;
                high--;
            }
            else{
                v[i]=nums[low]*nums[low];
                i--;
                low++;
            }
        }
        return v;
    }
};