class Solution {
public:
    void solve(int id, vector<vector<int>>& ans, vector<int> curr, vector<int>& arr, int target){
        
        if(target==0) {
            ans.push_back(curr);
            return;
        }
        if(id==arr.size()) return;
        if(arr[id]>target) return;

        // take 
        if(arr[id]<=target){
            curr.push_back(arr[id]);
            solve(id+1,ans, curr, arr, target-arr[id]);
            curr.pop_back();
        }
        while(id+1<arr.size() && arr[id]==arr[id+1]) id++;

        //non-take
        solve(id+1,ans, curr, arr, target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        solve(0,ans,curr,candidates, target);
        return ans;
    }
};
