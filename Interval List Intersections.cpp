class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
           vector<vector<int>> result;
        int i = 0, j = 0;
        
        while(i < firstList.size() and j < secondList.size()){
            int lower = max(firstList[i][0], secondList[j][0]);
            int higher = min(firstList[i][1], secondList[j][1]);
            
            if(lower <= higher) result.push_back({lower, higher});
            
            (firstList[i][1] < secondList[j][1]) ? i++ : j++;
        }
        
        return result;
    }
};
