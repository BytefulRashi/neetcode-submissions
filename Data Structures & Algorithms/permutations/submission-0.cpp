class Solution {
public:
    void solve(vector<int>& curr, vector<bool>& freq, vector<vector<int>>& ans, vector<int>& nums){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return ;
        }

        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i]=true;
                curr.push_back(nums[i]);
                solve(curr, freq, ans, nums);
                curr.pop_back();
                freq[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> freq(nums.size(), false);

        solve(curr, freq, ans, nums);
        return ans;
        
    }
};
