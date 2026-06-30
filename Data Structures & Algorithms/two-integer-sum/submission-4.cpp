class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> v(n);
        for (int idx = 0; idx < n; idx++) v[idx] = {nums[idx], idx};

        sort(v.begin(), v.end());

        int i = 0, j = n - 1;
        while (i < j) {
            int sum = v[i].first + v[j].first;
            if (sum == target) {
                int a = v[i].second, b = v[j].second;
                return a < b ? vector<int>{a, b} : vector<int>{b, a};
            }
            else if (sum > target) j--;
            else i++;
        }
        return {};
    }
};
