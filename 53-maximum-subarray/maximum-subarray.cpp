class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            
            max_sum = max(nums[i], max_sum + nums[i]);
            ans = max(ans, max_sum);
        }

        return ans;
    }
};