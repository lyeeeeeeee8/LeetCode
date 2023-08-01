class Solution {
public:
    vector<vector<int>> res;
    void helper(int idx, int n, int k, vector<int>& current)
    {
        //base case
        if(current.size() == k)
        {
            res.push_back(current);
            return;
        }
        for(int i=idx; i<=n; i++)
        {
            current.push_back(i);
            helper(i+1, n, k, current);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int> current;
        helper(1, n, k, current);
        return res;
    }
};