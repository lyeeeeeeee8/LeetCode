class Solution {
public:
    const long long mod = 1e9 + 7;
    long long helper(int n, int goal, int k, vector<vector<int>>& dp)
    {
        if(n == 0 && goal == 0)
            return 1;
        if(n == 0 || goal == 0)
            return 0;
        if(dp[n][goal] != -1)
            return dp[n][goal];
        long long pick_from_new_song = n * helper(n-1, goal-1, k, dp);
        long long pick_from_repeated_song = max(0, n-k) * helper(n, goal-1, k, dp);
        dp[n][goal] = (pick_from_new_song + pick_from_repeated_song) % mod;
        return dp[n][goal];
    }
    int numMusicPlaylists(int n, int goal, int k) 
    {
        vector<vector<int>> dp(n+1, vector<int>(goal+1, -1));
        return helper(n, goal, k, dp);
    }
};