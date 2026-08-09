class Solution {
public:
     long long int binarysearch(int n){

        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;

        long long int ans = -1;

        while(s<=e){
            long long int square = mid * mid;

            if(square==n)
            return mid;

            if(square < n){
                ans = mid; // agar number answer se chhota hoga to mid ko answer me store kara lo
                s = mid + 1;

            }
            else{
                e= mid - 1; // greater than wala case to end ko piche laana hai
            }
            mid = s + (e-s)/2;   // updating mid
        }
        return ans;
     }

    int mySqrt(int x) {
        return binarysearch(x);
        
    }
};