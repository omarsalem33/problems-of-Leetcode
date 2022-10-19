struct comp {
    bool operator() (pair<int, string> a, pair<int, string> b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};

class Solution {
public:    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map < string , int > mp;
        for(auto &i : words)
            mp[i]++;
        priority_queue<pair<int, string>, vector<pair<int, string>>, comp> pq;
        for(auto &i : mp){
            pq.push({i.second , i.first});
        }
        
        vector < string > ans ;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans ;
    }
};