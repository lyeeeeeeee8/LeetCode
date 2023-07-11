class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int len = nums.size(), idx;
        vector<int> res(len);
        for(int i=0; i<len; i++)
        {
            idx = (i + k) % len;
            res[idx] = nums[i];
        }
        nums = res;
    }
};