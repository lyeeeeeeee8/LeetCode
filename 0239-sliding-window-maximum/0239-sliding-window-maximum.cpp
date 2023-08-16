class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int> res;
        int L = 0, R = 0;
        deque<int> dq;
        while(R < nums.size())
        {
            // Keep the dq decreasing
            while(!dq.empty() && nums[R] > nums[dq.back()])
                dq.pop_back();
            dq.push_back(R);

            // Make sure the elements in dq are between L and R
            if(L > dq.front())
                dq.pop_front();
            
            // Number of elements reach k
            if(R + 1 >= k)
            {
                res.push_back(nums[dq.front()]);
                L++;
            }    
            R++;
        }
        return res;
    }
};