class Solution {
public:
    void helper(vector<int>& nums, int i, vector<vector<int>>& ans,
                vector<int>& vect) {
        if (i == nums.size()) {
            ans.push_back(vect);
            return;
        }
        vect.push_back(nums[i]);
        helper(nums, i + 1, ans, vect);
        vect.pop_back();
        helper(nums, i + 1, ans, vect);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vect;
        helper(nums, 0, ans, vect);
        return ans;
    }
};