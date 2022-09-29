class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {           
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto i : arr)
        {
            pq.push({abs(x-i),i});
        }
        vector<int> ans;
        while(!pq.empty() and k > 0)
        {
            ans.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};