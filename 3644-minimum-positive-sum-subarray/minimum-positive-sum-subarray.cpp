class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            int current_sum = 0;
            for(int j = i; j<n; j++){
                current_sum += nums[j];
                int length = j - i + 1;
                if (length >= l && length <= r && current_sum > 0){
                    ans = std::min(ans, current_sum);
                }
            }
        }
        if (ans == INT_MAX){
            return -1;
        }
        return ans;


        
    }
};