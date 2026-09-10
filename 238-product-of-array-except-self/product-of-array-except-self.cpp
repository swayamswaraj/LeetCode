class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int p=1,c=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                flag=true;
                c++;
                continue;
            } 
            p*=nums[i];
        }
        if(c>1) return vector<int>(n,0);
        for(int i=0;i<n;i++){
            if(flag==true&&nums[i]!=0) nums[i]=0;
            else if(flag==true&&nums[i]==0) nums[i]=p;
            else nums[i]=p/nums[i];
        }
        return nums;
    }
};