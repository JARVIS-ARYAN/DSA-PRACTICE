class Solution {
public:
    string frequencySort(string s) {

        int n = s.length();
        int freq[256] = {0};

        // 1. Count character frequencies
        for (int i = 0; i < n; i++) {
            unsigned char ch = s[i];
            freq[ch]++;
        }

        string ans = "";
        int maxFreq = 0;

        // 2. Find the highest frequency
        for (int i = 0; i < 256; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }

        // 3. Build result string from maxFreq down to 1
        for (int count = maxFreq; count > 0; count--) {
            for (int i = 0; i < 256; i++) {
                if (freq[i] == count) {
                    for (int k = 0; k < count; k++) {
                        ans += (char)i;
                    }
                }
            }
        }

        return ans;
    }
};