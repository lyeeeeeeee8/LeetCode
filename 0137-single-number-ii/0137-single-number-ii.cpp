class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int num, answer;
        map<int,int> counter; 
        for(int i=0; i<nums.size(); i++)
        {
            num = nums[i];
            counter[num]++;
            if(counter[num] == 3)
                counter.erase(num);
            else if(counter[num] > 3)
                counter[num] -= 3;
        }
        answer = counter.begin()->first;
        return answer;
    }
};