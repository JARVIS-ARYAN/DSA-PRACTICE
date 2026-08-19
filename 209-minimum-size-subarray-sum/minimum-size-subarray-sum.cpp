

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int left = 0;
        int current_sum = 0;
        int min_len = 0; // Base flag 0 tracking

        for (int right = 0; right < nums.size(); right++) {
            current_sum += nums[right];

            while (current_sum >= target) {
                int window_size = right - left + 1;
                
                // Pehli baar update ho raha hai toh directly size store karo, 
                // nahi toh minimum length track karo
                if (min_len == 0) {
                    min_len = window_size;
                } else {
                    min_len = std::min(min_len, window_size);
                }

                current_sum -= nums[left];
                left++;
            }
        }

        
        return min_len;
    }
};