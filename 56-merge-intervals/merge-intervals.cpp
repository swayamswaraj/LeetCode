class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int x=0;
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=v[x][1]){
                v[x][0]=min(v[x][0],intervals[i][0]);
                v[x][1]=max(v[x][1],intervals[i][1]);
            }
            else{
                x++;
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};