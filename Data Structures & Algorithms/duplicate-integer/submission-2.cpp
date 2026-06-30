class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen(begin(nums), end(nums));
        return seen.size() < nums.size();
    }
};