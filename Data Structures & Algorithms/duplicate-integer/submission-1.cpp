class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> set(begin(nums), end(nums));
        if(set.size()<nums.size()) return true;
        return false;

        
        
    }
};