class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>mat(m,vector<int>(n,0));
		int cnt = 0;    

		for(int i=0 ; i<indices.size() ; i++){

			for(int j=0 ; j<m ; j++){
				mat[j][indices[i][1]]++;
			}

			for(int k=0 ; k<n ; k++){
				mat[indices[i][0]][k]++;
			}

		}

		for(int i=0 ; i<m ; i++)
			for(int j=0 ; j<n ; j++) 
				if(mat[i][j]%2!=0)
					cnt++;


		return cnt;
       
    }
};




