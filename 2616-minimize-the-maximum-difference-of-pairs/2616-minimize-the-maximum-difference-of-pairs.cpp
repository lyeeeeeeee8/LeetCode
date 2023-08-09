class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) 
    {
        sort(nums.begin(), nums.end());
        int L = 0, R = nums[nums.size() - 1] - nums[0], M;
        int pairs = 0;
        while(L < R)
        {
            M = L + (R - L) / 2;
            pairs = 0;
            for(int i=1; i<nums.size() && pairs < p; i++)
            {
                if(nums[i] - nums[i-1] <= M)
                {
                    pairs++;
                    i++;
                }
            }
            if(pairs >= p)
                R = M;
            else
                L = M + 1;
        }
        return L;
    }
};