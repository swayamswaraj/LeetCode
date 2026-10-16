class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=ransomNote.size();
        int n=magazine.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<m;i++){
            mp[ransomNote[i]]--;
            if(mp[ransomNote[i]]<0) return false;
        }
        return true;
    }
};