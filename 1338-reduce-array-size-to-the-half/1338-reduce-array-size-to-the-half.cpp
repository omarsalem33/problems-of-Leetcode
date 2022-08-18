class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map < int , int > occ;
        for(auto &i : arr)
            occ[i]++;
        int n =  arr.size();
        priority_queue <int>pq;
        for(auto i : occ)
            pq.push(i.second);
        int ans = 0  , minus = 0;
        while(!pq.empty()){
            ans ++;
            minus += pq.top();
            pq.pop();
            if(minus >= n/2)
                break;
        }
        
        return ans ;
    }
};


