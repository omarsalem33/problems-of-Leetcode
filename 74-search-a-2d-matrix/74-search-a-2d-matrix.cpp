class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto ans = 0 , cnt = 0;
            for(auto &i : matrix)
            {
                    if(binary_search(i.begin(), i.end() , target))
                            return true;
            }
           return false;
    }
};