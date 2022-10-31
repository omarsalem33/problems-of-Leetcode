class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& a) {
        stack < pair < int ,int > > st;
        for(int i = 0 ; i < a.size() ;i++)
            st.push({i,0});
        for(int i = 0 ; i < a[0].size() ;i++)
            st.push({0,i});
        while(st.size())
        {
            int x  = st.top().first, y = st.top().second;
            int value = a[x][y];
            st.pop();
            while(x < a.size() and y < a[0].size())
            {
                if(a[x][y] != value)
                    return false;
                x++,y++;
            }
        }
        return true;
        
    }
};

/*
|        |
| {0,1}  |
| {0,0}  | 
| {1,0}  |
| {0,0}  |
---------

*/