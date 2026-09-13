class Solution {
public:
    bool checkDivisibility(int n) {
        int ans=n,s=0,p=1;
        while(n!=0){
            int d=n%10;
            s+=d;
            p*=d;
            n=n/10;
        }
        return(ans%(s+p)==0);
    }
};