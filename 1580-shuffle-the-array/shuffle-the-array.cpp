class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans = {}; // created a new vector to store the elements
        
        for(int i = 0; i<n; i++){
            ans.push_back(nums[i]);  // pushing the X elements 
            ans.push_back(nums[n + i]);  // pushing the Y elements 
            
        }
         return ans;
        

    }
   
};