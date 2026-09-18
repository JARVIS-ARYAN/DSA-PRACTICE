#include <string>

class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        std::string result = "";
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                if (depth > 0) {
                    result += c; 
                }
                depth++; 
            } else {
                depth--;
                if (depth > 0) {
                    result += c; 
                }
            }
        }

        return result;
    }
};