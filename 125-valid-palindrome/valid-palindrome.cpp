class Solution {
private:
    bool Valid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }

    char tolowercase(char ch){
        if(ch >= 'A' && ch <= 'Z'){
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool checkPallindrome(string a){
        int s = 0;
        int e = a.length() - 1;

        while(s <= e){
            if(a[s] != a[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        
        for(int j = 0; j < s.length(); j++){
            if(Valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        // Convert to lowercase
        for(int j = 0; j < temp.length(); j++){
            temp[j] = tolowercase(temp[j]);
        }

        return checkPallindrome(temp);
    }
};