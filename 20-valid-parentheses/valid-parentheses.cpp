class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char ch : s) {
            // 1. If it's an opening bracket, push to stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            // 2. If it's a closing bracket
            else {
                // Safety check: no opening bracket available
                if (st.empty()) return false;
                
                // Check if top bracket matches current closing bracket
                if (ch == ')' && st.top() != '(') return false;
                if (ch == '}' && st.top() != '{') return false;
                if (ch == ']' && st.top() != '[') return false;
                
                // Matched successfully! Remove the open bracket
                st.pop();
            }
        }
        
        // 3. If stack is empty at the end, every open bracket was matched!
        return st.empty();
    }
};