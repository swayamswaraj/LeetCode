class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int ans=0,c=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') c++;
            ans=max(ans,c);
        }
        int low=0,high=k-1;
        while(high<n){
            high++;
            low++;
            if(high==n) break;
            if(s[high]=='a'||s[high]=='e'||s[high]=='i'||s[high]=='o'||s[high]=='u') c++;
            if(s[low-1]=='a'||s[low-1]=='e'||s[low-1]=='i'||s[low-1]=='o'||s[low-1]=='u') c--;
            ans=max(ans,c);
        }
        return ans;
    }
};