class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int ans = 0, Rcnt = 0, Lcnt = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                Rcnt ++;
            }
            else
            {
                Lcnt = Rcnt;
                Rcnt = 0;
            }
            ans = max(ans, Lcnt + Rcnt);
        }
        return (ans == nums.size() ? ans - 1 : ans);
    }
};