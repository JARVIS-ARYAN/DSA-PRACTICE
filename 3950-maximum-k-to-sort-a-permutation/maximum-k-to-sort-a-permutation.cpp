class Solution {
public:
    int sortPermutation(vector<int>& nums) {

        int n = nums.size(), current = 0 , andOpr = -1;

        for(int i = 0; i<n; i++){
            if(nums[i] != i ) andOpr &= nums[i];
        }
        return andOpr == -1 ? 0 : andOpr;
        
    }
};