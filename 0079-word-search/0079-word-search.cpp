class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
      int n = board.size() , m =board[0].size() ,l = word.size() , idx = 0;
      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
          if(board[i][j] == word[idx]){
            if(search(i , j , idx , board, word))
              return true;
          }
        }
      }
    return false;
    }

    bool search(int i , int j , int idx , vector < vector < char > >& grid , string &word){
      int n = grid.size() , m =grid[0].size() ;
      if(idx == word.size())                    return true;
      if(i < 0 or i >= n or j < 0 or j >= m)    return false;
      bool check = false;
      if(grid[i][j] == word[idx]){
        char tmp = word[idx];
        grid[i][j] = '#';
        check = search(i + 1, j , idx + 1 , grid , word) or search(i - 1, j , idx + 1 , grid , word)
              or search(i , j + 1, idx + 1 , grid , word) or search(i , j - 1, idx + 1 , grid , word);
        grid[i][j] = tmp;
      }
      return check;
    }
};