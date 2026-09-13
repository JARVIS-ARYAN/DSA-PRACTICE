class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        int lastseenS[256] = {0};
        int lastseenT[256] = {0};

        for(int i = 0; i<s.length(); i++){
            unsigned char charS = s[i];
            unsigned char charT = t[i];

            if(lastseenS[charS ] != lastseenT[charT]){
                return false;
            }

            lastseenS[charS] = i + 1;
            lastseenT[charT] = i + 1;
        }
        return true;
        
    }
};