class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      map < int , int > freqLost;
      for(auto &i : matches)
      {
        if(!freqLost.count(i[0]))
          freqLost[i[0]] = 0;
        freqLost[i[1]]++;
      }

      vector< int > Zero , One;
      for(auto &[f,s] : freqLost)
      {
        if(s == 0)
          Zero.emplace_back(f);
        else if (s == 1)
          One.emplace_back(f);
      }
      return {Zero,One};
    }
};