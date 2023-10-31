class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0;
        int i = 0;
        long long sum = 0;
        int len = nums.size();
        int result = INT_MAX;
        while(j < len){
            sum += nums[j];
            if(sum < target)j++;
            else{
               while(sum >= target){
                   result = min(result, j-i+1);
                   sum -= nums[i++];
                   
               }
               j++;
            }
        }
        if(result == INT_MAX)return 0;
        return result;

    }
};