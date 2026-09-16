class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxdepth = 0;

        for (char ch : s) {
            // 1. If it's an opening bracket, push to stack
            if (ch == '(' ) {
                st.push(ch);
                if(st.size() > maxdepth){
                    maxdepth = st.size();
                }
            } 
            // 2. If it's a closing bracket
            else if((ch == ')')) {
                st.pop();
                
            
            }
        }
        return maxdepth;

        
    }
};