class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int flag=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<2*n;j++){
                if(nums[j%n]>nums[i]){
                    v[i]=(nums[j%n]);
                    flag++;
                    break;
                }
            }
            if(flag==1) flag=0;
            else{
                v[i]=-1;
                flag=0;
            }
        }
        return v;
    }
};