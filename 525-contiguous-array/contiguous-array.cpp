class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int ans=0,zero=0,one=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            else one++;
            int d=zero-one;
            if(d==0){
                ans=max(ans,i+1);
                continue;
            }
            if(mp.find(d)==mp.end()){
                mp[d]=i;
            }
            else{
                int idx=mp[d];
                int len=i-idx;
                ans=max(ans,len);
            }
        }
        return ans;
    }
};