class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n = str.size();
        unordered_map<string, vector<string>> mp;
        vector<vector<string>>ans;

        for(int i = 0; i<n; i++){
            string temp = str[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str[i]);

        }
        for (auto x : mp) {
    ans.push_back(x.second); // x.second is the vector<string>
}
return ans;
        
    }
};