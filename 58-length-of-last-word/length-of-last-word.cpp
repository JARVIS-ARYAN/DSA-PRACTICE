class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

// Loop 1: Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
}

// Loop 2: Count the characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
}

    return length;
       
        
    }
};