class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // Stores {number -> index}
        
        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];
            
            // 1. Check if the partner number was seen before
            if (mp.count(needed) > 0) {
                return {mp[needed], i}; // Found both indices!
            }
            
            // 2. If not found, record current number and its index
            mp[nums[i]] = i;
        }
        
        return {};
    }
};