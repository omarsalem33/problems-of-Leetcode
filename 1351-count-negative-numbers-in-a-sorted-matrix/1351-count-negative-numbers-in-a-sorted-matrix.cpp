class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto &i : grid)
        {   
            ans += upper_bound(i.rbegin() , i.rend() , -1) - i.rbegin();
        }
    return ans ;
    }
    
};