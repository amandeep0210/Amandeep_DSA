class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i = 0;
        int j = 0;
        int len = nums.size();
        int p = k+1;
        while(j < len){
            mp[nums[j]]++;
            
            if(j-i+1 < p)j++;
            else if(j-i+1 == p){
                if(mp.size() < p)return true;

                mp[nums[i]]--;
                if(mp[nums[i]] == 0)mp.erase(nums[i]);
                i++;
                j++;
            }
        }
        
        if(p > len){
            if(mp.size() < len)return true;
        }
        return false;

    }
};