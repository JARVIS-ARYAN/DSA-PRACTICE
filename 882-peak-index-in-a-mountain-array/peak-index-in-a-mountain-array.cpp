class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        int mid = s + (e - s) / 2;

        // Loop tab tak chalega jab tak s aur e ek hi element par point nahi karte (s == e)
        while (s < e) {
            
            // AGAR current element aage wale element se chhota hai:
            // Iska matlab hum mountain ke UPHILL (left slope) par hain.
            // Peak element right side me hoga, toh left half ko eliminate kar do.
            if (arr[mid] < arr[mid + 1]) {
                s = mid + 1; // mid peak nahi ho sakta, toh search 'mid + 1' se karo
            } 
            // AGAR current element aage wale se bada ya barabar hai:
            // Iska matlab hum DOWNHILL (right slope) par hain YA phir bilkul PEAK par hain.
            else {
                e = mid; // mid khud bhi peak ho sakta hai, isliye 'e = mid' (mid - 1 nahi karenge)
            }

            // Pointers update hone ke baad naya mid recalculate karo
            mid = s + (e - s) / 2;
        }

        // Jab loop khatam hoga, tab s == e hoga aur wo peak index hi hoga
        return s; // Chahe 'return s;' karo ya 'return e;', dono same point kar rahe hain
    }
};