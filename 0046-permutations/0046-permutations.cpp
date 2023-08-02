class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<int> &nums, int i, int n)
    {
        // base case
        if(i == n)
        {
            res.push_back(nums);
            return;
        }
        for(int j=i; j<=n; j++)
        {
            swap(nums[i], nums[j]);
            helper(nums, i+1, n);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        helper(nums, 0, nums.size() - 1);
        return res;
    }
};