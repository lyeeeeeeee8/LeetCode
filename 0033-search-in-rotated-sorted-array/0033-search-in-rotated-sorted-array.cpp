class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int L = 0, R = nums.size() - 1, M = L + (R - L) / 2;
        int res = -1;
        while(L <= R)
        {
            if(target == nums[M])
            {
                res = M;
                break;
            }
            if(nums[M] >= nums[L]) // Left part is non-rotated
            {
                if(target >= nums[L] && target <= nums[M])
                    R = M - 1;
                else
                    L = M + 1;
            }
            else // Right part is non-rotated
            {
                if(target >= nums[M] && target <= nums[R])
                    L = M + 1;
                else
                    R = M - 1;
            }
            M = L + (R - L) / 2;
            // cout << "L = " << L << " : " << nums[L] << endl;
            // cout << "M = " << M << " : " << nums[M] << endl;
            // cout << "R = " << R << " : " << nums[R] << endl;
            // cout << "--------------------------" << endl;
        }
        return res;
    }
};