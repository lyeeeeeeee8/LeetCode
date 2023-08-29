class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int score = 0, max_score = 0, best_time = -1; 
        for(int i=0; i<customers.size(); i++)
        {
            score += (customers[i] == 'Y') ? 1 : -1;
            // cout << score << endl;
            if(score > max_score) 
            {
                max_score = score;
                best_time = i;
            }
        }
        return best_time + 1;  // change to 1-indexed
    }
};