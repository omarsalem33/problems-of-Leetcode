class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int cnt = 0;
        int sum = neededTime[0];
        int maxCost = neededTime[0];
        for(int i=1;i<n;i++)
        {
            if(colors[i] != colors[i-1])
            {
                cnt += (sum-maxCost);
                sum = 0;
                maxCost = 0;
            }
            sum += neededTime[i];
            maxCost = max(maxCost,neededTime[i]);
        }
        cnt += (sum-maxCost);
        return cnt;
    }
};