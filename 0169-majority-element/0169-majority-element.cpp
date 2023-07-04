class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> counter;
        int goal = nums.size() / 2, num;
        for(int i=0; i<nums.size(); i++)
        {
            num = nums[i];
            counter[num]++;
            if(counter[num] > goal)
                return num;
        }
        return 0;
    }
};