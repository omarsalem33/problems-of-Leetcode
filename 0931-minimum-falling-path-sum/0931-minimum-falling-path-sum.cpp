class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size() , m = matrix[0].size();
        if(n == 0 or m == 0)
            return 0;
        for(int i = 1; i < n ; i++)
        {
            for(int j = 0; j < m ; j++)
            {
                int Min = matrix[i-1][j];
                if(j > 0)
                    Min = min(matrix[i-1][j-1] , Min);
                if(j < m -1)
                    Min = min(matrix[i-1][j+1] , Min);
                matrix[i][j] += Min; 
            }
        }
        int ans = INT_MAX;
        for(int i = 0; i < m ;i++)
            ans = min(ans , matrix[n-1][i]);
        return ans;
    }
};