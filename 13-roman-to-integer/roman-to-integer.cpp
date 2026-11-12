int getvalue(char x){
    switch (x){
       case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }

}
class Solution {
public:
    int romanToInt(string x) {
        
        int n = x.length();
        int ans=0;

        for (int i=0 ; i<n; i++){
            int current = getvalue(x[i]);
            if (i + 1 < n && current < getvalue(x[i + 1])) {
                ans -= current;
            } else {
                ans += current;
            }
        }

      return ans;
}};
        