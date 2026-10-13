class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int c=INT_MAX,ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            while(l<h){
                if(nums[i]+nums[l]+nums[h]==target){
                    return target;
                }
                else if(nums[i]+nums[l]+nums[h]<target){
                    int d=abs((nums[i]+nums[l]+nums[h])-target);   
                    if(d<c){
                        ans=nums[i]+nums[l]+nums[h];
                        c=d;
                    }
                    l++;
                }
                else{
                    int d=abs((nums[i]+nums[l]+nums[h])-target);   
                    if(d<c){
                        ans=nums[i]+nums[l]+nums[h];
                        c=d;
                    }
                    h--;
                }
            }
        }
        return ans;
    }
};