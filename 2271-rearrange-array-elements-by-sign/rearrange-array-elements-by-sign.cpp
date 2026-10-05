class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positives;
        vector<int> negatives;
        vector<int> result;
        result.reserve(n);


        for(int num : nums){
            if(num > 0){
                positives.push_back(num);
            }
            else if(num < 0){
                negatives.push_back(num);
            }
        }

        int i = 0, j = 0;

        while(i < positives.size() && j < negatives.size()){
            result.push_back(positives[i++]);
            result.push_back(negatives[j++]);
        } 
        while (i < positives.size()) {
            result.push_back(positives[i++]);
        }

        
        while (j < negatives.size()) {
            result.push_back(negatives[j++]);
        }

        return result;
    }
};
