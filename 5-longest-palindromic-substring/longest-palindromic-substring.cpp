class Solution {
public:
    // Helper function to expand outwards from a given center
    int expandFromCenter(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }

    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start_index = 0;
        int max_len = 1;

        for (int i = 0; i < s.length(); i++) {
            // 1. Odd Length Palindrome (Single center 'i')
            int len1 = expandFromCenter(s, i, i);

            // 2. Even Length Palindrome (Double center 'i' and 'i+1')
            int len2 = expandFromCenter(s, i, i + 1);

            // Dono mein se jo bada length de
            int current_max = max(len1, len2);

            // Agar naya maximum mil jaye toh start_index aur max_len update karo
            if (current_max > max_len) {
                max_len = current_max;
                start_index = i - (current_max - 1) / 2;
            }
        }

        // Substring extract karke return karo
        return s.substr(start_index, max_len);
    }
};