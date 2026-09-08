class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return false;
        }
        return n-1000+1;
        
    }
};