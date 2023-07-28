class Solution {
public:
    int Score(vector<int>&nums, int i, int j)
    {
        if(i > j) return 0;
        int score = max(nums[i] + min(Score(nums, i+2, j), Score(nums, i+1, j-1)),
                        nums[j] + min(Score(nums, i+1, j-1), Score(nums, i, j-2)));
        return score;
    }
    bool PredictTheWinner(vector<int>& nums) 
    {
        int total_score = 0;
        for(int num : nums) total_score += num;
        int player1_score = Score(nums, 0, nums.size()-1);
        int player2_score = total_score - player1_score;
        return player1_score >= player2_score;
    }
};