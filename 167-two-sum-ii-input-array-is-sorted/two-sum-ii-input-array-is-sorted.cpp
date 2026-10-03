class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        int n = nums.size();

        for(int i=0; i<n; i++){
            int seen = target - nums[i];
            if(mp.count(seen)){
                return{mp[seen], i+1};
            }
            mp[nums[i]] = i + 1;
        
        }
        return {};

        
    }
};