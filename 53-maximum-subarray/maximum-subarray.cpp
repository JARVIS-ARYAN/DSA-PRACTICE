class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        while(n==1){
            if(nums[0] == 0){
                return 0;
            }
            else if(nums[0] == -1){
                return -1;
            }
            else{
                return 1;
            }
        }

        
        

        int max_sum = nums[0];
        int min_sum = nums[0];
        int ans = nums[0];

        for(int i = 1; i<n; i++){
            max_sum = max(nums[i], max_sum + nums[i]);
            min_sum = min(nums[i], min_sum + nums[i]);
            ans = max(ans,max_sum);
        }
        return ans;
        
    }
};