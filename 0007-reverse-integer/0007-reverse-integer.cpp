class Solution {
public:
    int reverse(int x) 
    {
        long rx = 0; //reverse x
        int digit;
        while(x)
        {
            digit = x % 10;
            rx = rx * 10 + digit;
            x /= 10;
        }
        return (rx > INT_MAX || rx < INT_MIN) ? 0 : rx;
    }
};