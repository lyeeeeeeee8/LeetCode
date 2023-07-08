class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> dict;
        for(int i=0; i<nums.size(); i++)
        {
            if(dict.find(target - nums[i]) == dict.end())
                dict[nums[i]] = i;
            else
                return {i, dict[target - nums[i]]};
        }
        return {-1, -1};
    }
};