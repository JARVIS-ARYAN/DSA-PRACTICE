class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        long long int TotalSum = 0;
        for(int num : nums){
            TotalSum += num;
        }

        int target = TotalSum % p;

        if(target == 0) return 0;

        unordered_map<int, int> prefixMod;
        prefixMod[0] = -1;

        int curr_prefix = 0;
        int min_length = nums.size();

        for(int i = 0; i<nums.size(); i++){
            curr_prefix = (curr_prefix + nums[i]) % p;

            int needed = (curr_prefix - target + p) % p;
            if(prefixMod.count(needed)){
                min_length = min(min_length, i - prefixMod[needed]);
            }
            prefixMod[curr_prefix] = i;


        }
        if (min_length == nums.size()) {
            return -1;
        } else {
            return min_length;
        }
          
    }
};