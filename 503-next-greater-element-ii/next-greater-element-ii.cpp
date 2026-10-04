class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<long> v(n,LLONG_MIN);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    v[i]=(nums[j]);
                    break;
                }
            }
            if(v[i]==LLONG_MIN){
                for(int j=0;j<i;j++){
                    if(nums[j]>nums[i]){
                        v[i]=(nums[j]);
                        break;
                    }
                }
            }
            if(v[i]==LLONG_MIN) v[i]=-1;
        }
        for(int i=0;i<n;i++){
            nums[i]=v[i];
        }
        return nums;
    }
};