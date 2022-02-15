class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        vector<int> v;
        int i=0;
        int j=matrix[0].size()-1;
        
        while(i >= 0 and i < matrix.size() and  j>=0 and j < matrix[0].size())
            if(matrix[i][j] == t)
                return true;
            else if(matrix[i][j]<t)
                i++;
            
            else if (matrix[i][j] >t)
                j--;
            
        
        return false;
        
    }
};
