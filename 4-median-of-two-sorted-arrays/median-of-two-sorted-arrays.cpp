class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> v;
        int i=0,j=0,s=m+n;
        while(s>0){
            if(i!=m&&j!=n){
                if(nums1[i]<=nums2[j]){
                    v.push_back(nums1[i]);
                    i++;
                }
                else{
                    v.push_back(nums2[j]);
                    j++;
                }
            }
            else if(i!=m&&j==n){
                v.push_back(nums1[i]);
                i++;
            }
            else if(i==m&&j!=n){
                v.push_back(nums2[j]);
                j++;
            }
            s--;
        }
        if(v.size()%2==0){
            return (double)(v[v.size()/2]+v[(v.size()/2)-1])/2;
        }
        else return (double)v[v.size()/2];
    }
};