class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int L = 0, R = arr.size(), mid = L + (R - L) / 2;
        while(L < R)
        {
            if(arr[mid] < arr[mid+1])   //ascending
                L = mid + 1;
            else                        //descending
                R = mid;
            mid = L + (R - L) / 2;
        }
        return R;
    }
};