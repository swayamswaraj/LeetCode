class Solution {
public:
    bool canAliceWin(int n) {
        int i=10,t=1;
        while(n>=0){
            n=n-i;
            t++;
            i--;
        }
        return (t%2!=0);
    }
};