class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) 
    {
        int T_cnt = 0, T_idx = 0, F_cnt = 0, F_idx = 0;
        int res = 0;

        // Find max 'T' subarray by correcting k 'F'
        for(int i=0; i<answerKey.size(); i++)
        {
            if(answerKey[i] == 'F')
                F_cnt++;
            while(F_cnt > k)
            {
                if(answerKey[T_idx] == 'F')
                    F_cnt--;
                T_idx++;
            }
            res = max(res, i - T_idx + 1);
        }

        // Find max 'F' subarray by correcting k 'T'
        for(int i=0; i<answerKey.size(); i++)
        {
            if(answerKey[i] == 'T')
                T_cnt++;
            while(T_cnt > k)
            {
                if(answerKey[F_idx] == 'T')
                    T_cnt--;
                F_idx++;
            }
            res = max(res, i - F_idx + 1);
        }
        return res;
    }
};