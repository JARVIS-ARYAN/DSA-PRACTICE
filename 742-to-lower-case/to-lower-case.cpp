class Solution {
public:
    string toLowerCase(string s) {
        for(char &c : s){
            c = std:: tolower(static_cast<unsigned char>(c));
        }
        return s;
    }
};