class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int target, L, R; 
        vector<vector<int>> ans;
        vector<int> tmp;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            target = -nums[i];
            L = i + 1, 
            R = nums.size() - 1;
            while(L < R)
            {
                if(nums[L] + nums[R] == target)
                {
                    tmp = {nums[i], nums[L], nums[R]};
                    while(L < R && nums[L] == tmp[1]) L++;
                    while(L < R && nums[R] == tmp[2]) R--;
                    ans.push_back(tmp);
                }
                else if(nums[L] + nums[R] < target)
                    L++;
                else
                    R--;
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};