class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    int n = nums.size(); 
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
    return std::abs(a) < std::abs(b); // Ascending order of absolute values
    });

    long long ans = 0;
    int left = 0;
    int right = n-1;

    while(left <= right){
        ans += (long long)nums[right] * nums[right];
        right--;

        // 2. Check karo ki left aur right meet toh nahi kiye, phir chota magnitude subtract karo
    if (left <= right) {
        ans -= (long long)nums[left] * nums[left];
        left++;
    }
    }
    return ans;


    }
};