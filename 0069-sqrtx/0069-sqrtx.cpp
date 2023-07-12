class Solution {
public:
    int mySqrt(int x) 
    {
        if(x == 0) return 0;
        int L = 1, R = x, M;
        while(L <= R)
        {
            // M = (L + R) / 2; --> runtime error
            M = L + (R - L) / 2;
            if(M == x / M)
                return M;
            else if(M > x / M)
                R = M - 1;
            else
                L = M + 1;
        }
        return R;
    }
};