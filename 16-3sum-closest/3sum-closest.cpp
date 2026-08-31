class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // 1. Initialize tracker variable
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == target) {
                    return sum;
                }

                // 2. Update closestSum if the current sum is closer
                if (std::abs(target - sum) < std::abs(target - closestSum)) {
                    closestSum = sum;
                }

                if (sum < target) {
                    left++;
                } else {
                    right--; 
                }
            }
        }

        // 3. Return the overall closest sum
        return closestSum;
    }
};