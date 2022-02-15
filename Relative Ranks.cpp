class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
     int n =score.size();
        vector<string> ans;
        vector<int> temp = score;
        sort(temp.begin(),temp.end(),greater<int>());
        unordered_map<int,string> mp;
        for(int i=0;i<n;++i){
            if(i==0) mp[temp[i]] = "Gold Medal";
            else if(i==1) mp[temp[i]] = "Silver Medal";
            else if(i==2) mp[temp[i]] = "Bronze Medal";
            else mp[temp[i]] = to_string(i+1);
        }
       for(const auto &i:score){
           ans.push_back(mp[i]);
       } 
       return ans; 
    }
};
