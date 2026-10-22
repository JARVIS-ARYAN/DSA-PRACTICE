class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        int target = totalSum - x;

        if (target < 0) {
            return -1;
        }
        
        if (target == 0) {
            return nums.size();
        }

        int left = 0;
        int CurrentSum = 0;
        int Maxlength = -1;

        for (int right = 0; right < nums.size(); right++) {
            CurrentSum += nums[right];

            // Properly indented while loop
            while (CurrentSum > target && left <= right) {
                CurrentSum = CurrentSum - nums[left];
                left++;
            }
            
            if (CurrentSum == target) {
                Maxlength = max(Maxlength, right - left + 1);
            }
        }
        
        if (Maxlength == -1) {
            return -1;
        }
        
        return nums.size() - Maxlength;
    }
};