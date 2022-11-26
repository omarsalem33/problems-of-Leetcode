class Solution {
public:

    int Solve(int idx ,vector < pair < int , pair < int , int > > > &v, vector < int > &dp , int n)
    {
      if(idx >= n )
        return 0;
      if(dp[idx] != -1)
        return dp[idx];
      int Start = v[idx].first , End = v[idx].second.first , Profit = v[idx].second.second;
      pair < int , pair < int ,int > > p = {End, {0 ,0}};
      int NextIdx = lower_bound(v.begin() , v.end() , p) - v.begin();
      int Pick = Profit + Solve(NextIdx , v, dp ,n) , NotPick = Solve (idx+1 , v, dp , n);
      return dp[idx] = max(Pick , NotPick) ;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector < pair < int , pair < int , int > > > v(n, {0,{0,0}});
        for(int i = 0 ; i < n ; i ++)
          v[i]={startTime[i],{endTime[i],profit[i]}};
        vector<int> dp(n+1,-1);
        sort(v.begin(),v.end());
        return Solve(0,v,dp,n);
    }
};