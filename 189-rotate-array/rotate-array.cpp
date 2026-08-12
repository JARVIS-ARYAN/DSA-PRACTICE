class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1)
         return; // Edge case: Array with 0 or 1 element needs no rotation
        
        k = k % n;          // Handles k larger than array size
        if (k == 0) 
        return; // Edge case: Rotating 0 times changes nothing

        // 3-step reversal
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
    

        
