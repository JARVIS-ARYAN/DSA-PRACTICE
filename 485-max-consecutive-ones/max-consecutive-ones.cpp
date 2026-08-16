class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count = 0; // Tracks the current active streak of 1s
        int max_count = 0;     // Stores the maximum streak recorded so far
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                current_count++; // Increment active streak
                max_count = max(max_count, current_count); // Keep max updated
            } else {
                current_count = 0; // Reset streak when sequence is broken by 0
            }
        }
        
        return max_count;
    }
};