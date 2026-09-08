class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int freq[26] ={0};

        for(int i = 0; i<n; i++){
            char c = s[i];
            freq[c - 'a']++;


        }
        for(int i = 0; i<n; i++){
            char c = s[i];
            if(freq[c - 'a'] == 1){
                return i;
            }
            

        }
        return -1;
        
    }
};