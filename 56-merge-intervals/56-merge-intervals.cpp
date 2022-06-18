class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>vec;
    vec.push_back(intervals[0]);
    int k = 0;
    for(int i=1;i<intervals.size();i++)
    {
        if(vec[k][1]>=intervals[i][0])
        {
            vec[k][1]=intervals[i][1]>vec[k][1]?intervals[i][1]:vec[k][1];
        }
        else
        {
            k++;
            vec.push_back(intervals[i]);
        }
    }
    return vec;
}
};