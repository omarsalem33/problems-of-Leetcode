class Solution {
public :
  int numSquares(int n ){
    vector < int > dp(n+1 , INT_MAX);
    dp[0] = 0;
    int cnt = 1;
    while (cnt * cnt <= n){
      int sq = cnt * cnt;
      for(int i = sq ; i <= n  ; i++)
        dp[i] = min(dp[i] , dp[i-sq] + 1);
      cnt ++;
    }
    return dp[n];
  }

/*
0 1 2 3 4 5 6 7 8 9 10 11 12
        1 2 3 4 2 3 4  5  6
                  1 2  3  4
                          3
*/

};