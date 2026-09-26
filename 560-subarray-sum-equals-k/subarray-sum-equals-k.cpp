class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefix_sum = 0;
        int count = 0;

        for(int num : nums){
            prefix_sum += num;
            int target = prefix_sum - k;

            if (mp.find(target) != mp.end()) {
                count += mp[target]; 
            }

            mp[prefix_sum]++;
        }
        return count;
        
    }
};