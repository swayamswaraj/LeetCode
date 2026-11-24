class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=1,ans=INT_MIN;
        int arr_gcd=nums[0],arr_lcm=nums[0],prod=nums[0];
        while(high<n){
            prod*=nums[high];
            arr_gcd=gcd(arr_gcd,nums[high]);
            arr_lcm=lcm(arr_lcm,nums[high]);
            while(prod!=arr_gcd * arr_lcm){
                prod/=nums[low];
                low++;
                int i=low+1;
                arr_gcd=nums[low];
                arr_lcm=nums[low];
                while(i<=high){
                    arr_gcd=gcd(arr_gcd,nums[i]);
                    arr_lcm=lcm(arr_lcm,nums[i]);
                    i++;
                }
            }
            int len=high-low+1;
            ans=max(ans,len);
            high++;
        }
        return ans;
    }
};