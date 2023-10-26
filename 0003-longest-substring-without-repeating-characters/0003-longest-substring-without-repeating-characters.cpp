class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int i = 0;
        int j = 0;
        int maxi = 0;
        unordered_map<char, int> mp;
        while(j < len){
             mp[s[j]]++;
             if(j-i+1 == mp.size()){
               maxi = max(maxi, j-i+1);
               j++;
             }
             else{
                 while(mp.size() != j-i+1){
                   mp[s[i]]--;
                   if(mp[s[i]] == 0)mp.erase(s[i]);
                   i++;
                 }
                 maxi = max(maxi, j-i+1);
                 j++;
             }
        }
        return maxi;
    }
};