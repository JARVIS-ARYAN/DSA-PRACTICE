class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        std::unordered_map<char, int> charMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

        int total = 0;

        for(int i = 0; i<n; i++){
            int current_val = charMap[s[i]];
            int next_val = charMap[s[i + 1]];

            if(current_val < next_val){
                total = total - current_val;
            }
            else{
                total = total + current_val;
            }

        }
        return total;

        

        
    }
};