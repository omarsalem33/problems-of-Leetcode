class Solution { 
        public:
        vector<vector<int>> generate(int numRows)
        { 
                vector<vector<int>> ans;
                int i=1;
                while(i<=numRows)
                {
                        vector<int>v(i);
                        v[0]=1;
                        v[i-1]=1;
                        for(int k=1; k<i-1; k++) 
                                v[k]=ans[i-2][k]+ans[i-2][k-1]; 
                        ans.push_back(v); 
                        i++; 
                } 
                return ans;
        }
};