class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k<=1) return 0;

        int n = nums.size();
        int left = 0;
        int product = 1;
        int count = 0;

        for(int i = 0; i<n; i++){
            product = product * nums[i];

            while(product >= k){
                product = product / nums[left];
                left++;

            }
            count = count + (i - left + 1);
        }
        return count;
   
    }
};