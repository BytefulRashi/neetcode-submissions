class Solution {
public:
    void solve(int idx, int target, vector<int>& nums,
               vector<vector<int>>& ans, vector<int>& curr) {

        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        if (idx == nums.size() || target < 0)
            return;

        // Take (can reuse same element)
        curr.push_back(nums[idx]);
        solve(idx, target - nums[idx], nums, ans, curr);
        curr.pop_back();

        // Don't take
        solve(idx + 1, target, nums, ans, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, target, nums, ans, curr);

        return ans;
    }
};