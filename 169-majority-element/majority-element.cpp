#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            // 1. Assign a new candidate when the balance hits zero
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            } 
            // 2. Increment count if we see the candidate again
            else if (nums[i] == candidate) {
                count++;
            } 
            // 3. Decrement count when we see a different element
            else {
                count--;
            }
        }

        return candidate;
    }
};