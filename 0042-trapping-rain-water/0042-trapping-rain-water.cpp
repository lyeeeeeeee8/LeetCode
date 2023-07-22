class Solution {
public:
    int trap(vector<int>& height) 
    {
        int res = 0, L, R, tall_L = 0, tall_R = 0;
        for(L=0,R=height.size()-1; L<R;)
        {
            if(height[L] < height[R]) //R is higher, accumulate from L
            {
                tall_L = max(tall_L, height[L]);
                res += tall_L - height[L];
                L++;
            }
            else //L is higher, accumulate from R
            {
                tall_R = max(tall_R, height[R]);
                res += tall_R - height[R];
                R--;
            }
        }
        return res;
    }
};