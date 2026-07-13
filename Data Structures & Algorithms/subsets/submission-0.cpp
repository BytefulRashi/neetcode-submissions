class Solution {
public:
   void solve(int idx, vector<vector<int>>& ans, vector<int>& curr, vector<int>& nums){
    if(idx == nums.size()){
        ans.push_back(curr);
        return;
    }
    
    //no take
    solve(idx+1, ans, curr, nums);

    // take 
    curr.push_back(nums[idx]);
    solve(idx+1, ans, curr, nums);
    curr.pop_back();

    
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        solve(0,ans, curr, nums);
        return ans;
        
    }
};
