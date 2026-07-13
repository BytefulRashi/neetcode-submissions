class Solution {
public:
    void solve(int idx, vector<int>& curr, vector<vector<int>>& ans, vector<int>& nums){
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }

        

        //take
        curr.push_back(nums[idx]);
        solve(idx+1, curr, ans, nums);
        curr.pop_back();
        
        // Skip duplicates
        while(idx+1<nums.size() && nums[idx]==nums[idx+1]) idx++;

        // non take
        solve(idx+1, curr, ans, nums);

        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> curr;
        vector<vector<int>> ans;
        solve(0, curr, ans, nums);
        return ans;
    }
};
