class Solution {
public:
    int helper (int n , int k , int t , vector<vector<vector<int>>>&dp){
        const unsigned int M = 1000000007;
       
        if (n == 0)
            return (t == 0 ? 1 : 0);
        
        if(dp[n][k][t] != -1)
            return dp[n][k][t] % M;
        
        int ans = 0 ;
        for(int i = 1 ; i <= k ; i ++)
            if(t - i >= 0)
                ans+= helper(n-1 , k , t - i , dp) % M, ans %= M;
                
        dp[n][k][t] = ans % M;
        return ans % M;
    }
    
    int numRollsToTarget(int n, int k, int target) {
         
        vector<vector<vector<int>>> dp(n+1 , vector<vector<int>>(k+1 , vector<int>(target+1 , -1)));
        int ans=  helper(n , k , target , dp);
        return ans;
    }
};