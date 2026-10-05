class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char ch : s) {
            if (ch == '(') {
                st.push(0);
            } else {
                int innerScore = st.top();
                st.pop();
                
                // Calculates 1 if innerScore is 0, or 2 * innerScore otherwise
                int currentScore = 2 * innerScore + !innerScore;
                
                int outerScore = st.top();
                st.pop();
                st.push(outerScore + currentScore);
            }
        }

        return st.top();
    }
};