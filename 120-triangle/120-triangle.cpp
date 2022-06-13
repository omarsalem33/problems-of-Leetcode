class Solution {
int dp[200][200];
public:
   int minTotalUtil(vector<vector<int>>& triangle, int h, int j) {
        
       if(h == triangle.size()) {
             return 0;
        }  
        if(dp[h][j]!=-1){
            return dp[h][j];
        }
        return dp[h][j] = triangle[h][j] + min(minTotalUtil(triangle, h+1, j),minTotalUtil(triangle, h+1, j+1));
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
           memset(dp,-1,sizeof(dp));
           return minTotalUtil(triangle, 0, 0);
    }
};