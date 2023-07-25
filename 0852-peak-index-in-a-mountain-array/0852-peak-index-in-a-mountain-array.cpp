class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int dir = 0, pre_dir;
        for(int i=0; i<arr.size()-1; i++)
        {
            pre_dir = dir;
            if(arr[i+1] - arr[i] >= 0)
                dir = 1;
            else
                dir = -1;
            if(pre_dir * dir < 0)
                return i;
        }
        return 0;
    }
};