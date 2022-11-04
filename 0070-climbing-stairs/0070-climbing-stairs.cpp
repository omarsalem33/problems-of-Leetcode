class Solution {
public:
   int dp[46] ;
    int climbStairs(int n) {
        if(n == 1 or n == 2)
            return n;
        
        int dp[n + 1];
        dp[0] = 0 , dp[1] = 1 , dp[2] = 2;
        for(int i = 3;i<= n;i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
        
    }
};