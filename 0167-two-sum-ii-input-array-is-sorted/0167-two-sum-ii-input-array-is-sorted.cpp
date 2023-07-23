class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        map<int,int> dict;
        for(int i=0; i<numbers.size(); i++)
        {
            if(dict.count(target - numbers[i]) == 0)
                dict[numbers[i]] = i;
            else
                return {dict[target - numbers[i]]+1, i+1};
        }
        return {0, 0};
    }
};