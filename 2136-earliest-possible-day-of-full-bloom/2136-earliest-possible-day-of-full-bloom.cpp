bool comp(pair < int ,int > a , pair < int ,int > b)
    {
        return a.second > b.second;
    }
class Solution {
public:
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector < pair < int , int > > vp;
        for(int i = 0 ; i < plantTime.size() ;i++){
            vp.push_back({plantTime[i] , growTime[i]});
        }
        sort(vp.begin() , vp.end() , comp);
        int cur_time = 0 , ans = 0;
        for(auto &i : vp)
        {
            cur_time += i.first;
            ans = max(ans , cur_time + i.second);
        }
        return ans;
    }
};