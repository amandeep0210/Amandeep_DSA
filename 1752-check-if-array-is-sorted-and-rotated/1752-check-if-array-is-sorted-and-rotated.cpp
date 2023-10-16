class Solution {
public:
    bool check(vector<int>& nums) {
       int cnt = 0;
       int n = nums.size();
       for(int i = 1; i<nums.size(); i++){
           if(nums[i]< nums[i-1])cnt++;
       }
        if(cnt > 1)return false;
        if(cnt ==  1){
            if(nums[n-1] > nums[0])return false;
            return true;
        }
        else return true;
        
    }
};