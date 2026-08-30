class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int val = 0;

        for(int i = 0; i<n; i++){
            val = nums[i] * nums[i];
            ans.push_back(val);

        }
        std::sort(ans.begin() , ans.end());
        return ans;
        
    }
};