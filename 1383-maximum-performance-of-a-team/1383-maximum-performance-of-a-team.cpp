class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        const int mod = (int)1e9 + 7;
        vector < pair < int ,int > > vp;
        for(int i = 0 ; i < n ; i ++){
            vp.push_back({efficiency[i] ,speed[i]});
        }
        
        sort(vp.rbegin() , vp.rend());
        priority_queue<int, vector<int>, greater<int>> pq;
        long totelSpeed = 0  , ans = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            int curEff = vp[i].first;
            int curSp = vp[i].second;
            
            if(pq.size() == k)
            {
                totelSpeed -= pq.top();
                pq.pop();
            }
            pq.push(curSp);
            totelSpeed += curSp;
            ans = max(ans , totelSpeed * curEff);
        }
        return ans % mod; 
    }
};