class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Outer loop: Unsorted array ki start boundary (index i) ko aage badhata hai.
        // (n - 1) tak hi chalana kaafi hai kyunki last element apne aap sorted ho jata hai.
        for(int i=0 ; i<nums.size() ; i++){

            int minIndex = i;   // Maano abhi ke liye unsorted part ka pehla element (index i) sabse chhota hai.

            //Inner loop se baaki bachhe elements (i+1 se end tak) ko check karo.
            for(int j = i + 1; j<nums.size() ; j++){
                
                // Agar koi aisa element mile jo minIndex wale se bhi chhota hai,
                // toh uska index save kar lo.
                if(nums[j] < nums[minIndex])
                    minIndex = j;
                
            }
            swap(nums[minIndex],nums[i]);
        }
        
    }
};