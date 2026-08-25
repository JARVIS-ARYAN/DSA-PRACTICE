class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); // Note: fixed std::sort typo

        for(int i = 0; i < nums.size() - 1; i += 2) {
            if(nums[i] != nums[i+1]) {
                return nums[i]; // Return right away!
            }
        }
        
        // If all pairs match, the single element is at the very end
        return nums.back();
    }
};