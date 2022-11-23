class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      set < string > s;
        for(int i = 0 ; i < 9 ; i++){
          for(int j = 0 ; j < 9 ; j++){
            if(board[i][j] != '.'){
           
                string Row = "R"+to_string(i) + board[i][j]; 
                string Col = "C"+to_string(j) + board[i][j]; 
                string Box = "B"+to_string((i / 3) * 3 + (j / 3))+ board[i][j];
                //box: 00 , 01 , 02
                //     10 , 11 , 12
                //     20 , 21 , 22
            
                if(s.find(Row) == s.end() and s.find(Col) == s.end() and s.find(Box) ==s.end())
                
                    s.insert(Row) ,s.insert(Col) , s.insert(Box);
                else
                    return false; 
            }
          }
        }
        return true; 
    }
};