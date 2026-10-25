class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int max_len = 0;
        int max_freq = 0;
        unordered_map<char, int> freq_map;

        for(int right = 0; right < s.size(); right++){
            char ch = s[right];
            
            
            freq_map[ch]++;

            
            max_freq = max(max_freq, freq_map[ch]);

            int window_length = right - left + 1;

            if(window_length - max_freq > k){
                
                char left_char = s[left];
                freq_map[left_char]--;
                left++;
            }

            int valid_window_length = right - left + 1;
            max_len = max(max_len, valid_window_length);
        }
        
        return max_len;
    }
};