class Solution {
public:
    string largestOddNumber(string num) {
        // Step 1: Start from the last digit and move left
        for (int i = num.length() - 1; i >= 0; i--) {
            
            // Step 2: Check if the current digit is odd
            if (num[i] % 2 != 0) {
                // Step 3: Return substring from index 0 of length (i + 1)
                return num.substr(0, i + 1);
            }
        }
        
        // Step 4: If no odd digit was found in the whole string, return ""
        return "";
    }
};