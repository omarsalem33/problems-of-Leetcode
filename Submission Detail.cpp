class Solution {
public:
    void DFS(vector<vector<char>>& board, int x, int y, char c) {
        if (x < 0 or x >= board.size() or y < 0 or y >= board[0].size() or board[x][y] != 'O') 
            return;
            
        board[x][y] = c;
        
        DFS(board, x + 1, y, c);
        DFS(board, x - 1, y, c);
        DFS(board, x, y + 1, c);
        DFS(board, x, y - 1, c);
    }
    
    void solve(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
    
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') 
                DFS(board, i, 0, '!');
            if (board[i][m-1] == 'O') 
                DFS(board, i, m-1, '!');
        }
        
        for (int i = 0; i < m; i++) {
            if (board[0][i] == 'O') 
                DFS(board, 0, i, '!');
            if (board[n-1][i] == 'O') 
                DFS(board, n-1, i, '!');
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i and j and i < n - 1 and j < m - 1 and board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == '!') board[i][j] = 'O';
            }
        }
    }
};
