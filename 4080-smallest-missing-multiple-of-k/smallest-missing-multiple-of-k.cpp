class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int target = k; 

        for(int i = 0; i<nums.size(); i++ ){
            if(nums[i] == target){
                target = target + k;
            }
            

            
        }
        return target;
        
    }
};