class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[text[i]]++;
        }
        int ans=0;
        mp['l']/=2;
        mp['o']/=2;
        ans=min(mp['b'],min(mp['a'],min(mp['l'],min(mp['o'],mp['n']))));
        return ans;
    }
};