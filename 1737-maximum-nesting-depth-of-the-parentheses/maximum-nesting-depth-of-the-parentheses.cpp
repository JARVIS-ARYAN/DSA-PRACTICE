class Solution {
public:
    int maxDepth(string s) {
        int current_depth = 0;
        int maxdepth = 0;

        for (char ch : s) {
            // 1. If it's an opening bracket, push to stack
            if (ch == '(' ) {
                current_depth++;
                if(current_depth > maxdepth){
                    maxdepth = current_depth;
                }
            } 
            // 2. If it's a closing bracket
            else if((ch == ')')) {
                current_depth--;
                
            
            }
        }
        return maxdepth;

        
    }
};