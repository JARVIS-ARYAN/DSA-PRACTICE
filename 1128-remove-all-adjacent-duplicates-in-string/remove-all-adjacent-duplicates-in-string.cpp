class Solution {
public:
    string removeDuplicates(string s) {
        string res = ""; // Works as our stack
        
        for (char ch : s) {
            // 1. If stack is not empty AND top letter matches current letter
            if (!res.empty() && res.back() == ch) {
                res.pop_back(); // Delete the duplicate!
            } 
            // 2. Otherwise, add the current letter to our stack
            else {
                res.push_back(ch);
            }
        }
        
        return res;
    }
};
