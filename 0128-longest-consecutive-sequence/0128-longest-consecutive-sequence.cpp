class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;              //for nums = []
        map<int,int> dict;
        int res = 1, cnt = 1;                       //min res = 1, min cnt = 1
        for(int i=0; i<nums.size(); i++)
            dict[nums[i]] = 1;
            
        auto pit = dict.begin(), it = dict.begin();
        advance(it, 1);
        for(; it!=dict.end(); it++)
        {
            if(pit->first == it->first - 1)
            {
                cnt++;
                res = max(res, cnt);
            }
            else
                cnt = 1;
            pit = it;
        }
        return res;
    }
};