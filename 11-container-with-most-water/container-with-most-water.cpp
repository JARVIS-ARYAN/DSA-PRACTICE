class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        long long  max_water=0;

        while(left < right) {

            int width = right - left ;
            int current_height = min(height[right], height[left]);

            long long current_water =(long long) width * current_height;
            max_water = max(max_water , current_water);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
        
    }
};