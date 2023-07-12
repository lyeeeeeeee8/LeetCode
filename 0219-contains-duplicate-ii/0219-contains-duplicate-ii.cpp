class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        map<int,int> dict;
        for(int i=0; i<nums.size(); i++)
        {
            if(dict.count(nums[i]))
            {
                if(abs(dict[nums[i]] - i) <= k)
                    return true;
            }
            dict[nums[i]] = i;
        }
        return false;
    }
};