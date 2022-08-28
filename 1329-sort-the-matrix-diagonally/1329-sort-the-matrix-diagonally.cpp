class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
         int m = mat.size();
         int n = mat[0].size();
         int  j, p, q;	
        for(int i = 0 ; i < n ; i++)
        {
            p = 0; q = i;
            vector<int> a;
            while(p < m && q < n)
            {
                a.push_back(mat[p][q]);
                p++; q++;
            }
            sort(a.begin(), a.end());
			
            p = 0; q = i; j = 0;
            while(p < m && q < n)
            {
                mat[p][q] = a[j];
                p++; q++; j++;
            }
        }
		
        for(int i = 1 ; i < m ; i++)
        {
            p = i; q = 0;
            vector<int> a;
            while(p < m && q < n)
            {
                a.push_back(mat[p][q]);
                p++, q++;
            }
            sort(a.begin(), a.end());
			
            p = i; q = 0; j = 0;
            while(p < m && q < n)
            {
                mat[p][q] = a[j];
                p++; q++; j++;
            }
        }
        return mat;
    }
};