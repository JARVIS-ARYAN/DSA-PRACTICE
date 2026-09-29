class RandomizedSet {
private:
    vector<int> nums;
    unordered_map<int , int> mp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()) return false;

        nums.push_back(val);

        mp[val] = nums.size() - 1;
        return true;
    }
    
    bool remove(int val) {

        if (mp.find(val) == mp.end()) return false;

        int idx = mp[val];
        int last_val = nums.back();

        nums[idx] = last_val;

        mp[last_val] = idx;

        nums.pop_back();
        mp.erase(val);
        
        return true;
        
    }
    
    int getRandom() {
        int random_idx = rand() % nums.size();
        return nums[random_idx];
        
    }
};
