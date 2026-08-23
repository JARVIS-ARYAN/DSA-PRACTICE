class Solution {
public:
    bool isPalindrome(int x) {
        long long int original = x;
        long long int pallindrome = 0; // Fixed: Changed from 'int' to 'long long int' to prevent overflow

        while(x > 0){
            int digit = x % 10;
            pallindrome = pallindrome * 10 + digit; 
            x = x / 10;

        }
        if(pallindrome == original ){
            return 1;
        }
        else{
            return 0;
        }
    
        
    }
};