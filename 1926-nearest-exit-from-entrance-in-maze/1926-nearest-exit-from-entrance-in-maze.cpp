class Solution {
public :
  bool isExit (int i , int j , int n , int m , vector<vector<char>>& maze , int startI , int startJ)
  {
    if(startI == i and startJ == j)     return false ;
    if ((i == 0 or j == 0 or i == n-1 or j == m-1) and maze[i][j] == '.')   return true;
    return false;
  }
  bool isValid(int i , int j  , int n , int m )
  {
    return (i >=  0 and i  < n and j >= 0 and j < m);
  }

    int dx[4] = { -1, +1,  0,  0};
    int dy[4] = {  0,  0, +1, -1};
  int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
  {
    int n = maze.size(), m = maze[0].size();
    int startI = entrance[0] , startJ = entrance[1];
    queue< pair< pair<int,int> , int > > q;
    vector < vector < bool > > vis (n , vector < bool > (m , 0));
    q.push({{startI,startJ} , 0});
    while (!q.empty())
    {
      int row = q.front().first.first;
      int col = q.front().first.second;
      int steps = q.front().second;
      q.pop();
      if(isExit(row, col , n , m , maze, startI , startJ))
      {
        return steps;
      }

      for(int l = 0 ; l < 4 ; l++)
      {
          int i = row + dx[l];
          int j = col + dy[l];
          if(isValid(i , j , n ,m ) and !vis[i][j] and maze[i][j] == '.'){
            q.push({{i, j} , steps+1});
            vis[i][j] = true;
          }
      }

    }
     return -1;
  }

};