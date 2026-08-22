class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n; // Keep original 'n' intact for the final check
        int sum = 0;
        int prod = 1;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + digit;
            prod = prod * digit;
            temp /= 10; 
        }

        int div = sum + prod;

        // Use modulo '%' to check divisibility against original 'n'
        return (n % div == 0); 
    }
};