class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int L = 0, R = 0, sum = 0, res = INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            R = i;
            if(sum >= target)
            {
                res = min(res, R - L + 1);
                while(sum > target)
                {
                    sum -= nums[L];
                    L++;
                    if(sum >= target)
                        res = min(res, R- L + 1);
                }
            }
        }
        return res != INT_MAX ? res : 0;
    }
};