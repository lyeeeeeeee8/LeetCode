class Solution {
public:
    int digit_sum(int n)
    {
        int num, sum = 0;
        while(n > 0)
        {
            num = n % 10;
            sum += num * num;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        int Pslow = n;
        int Pfast = digit_sum(n);
        while(Pfast != 1 && Pfast != Pslow)
        {
            Pslow = digit_sum(Pslow);
            Pfast = digit_sum(digit_sum(Pfast));
        }
        return Pfast == 1;
    }
};