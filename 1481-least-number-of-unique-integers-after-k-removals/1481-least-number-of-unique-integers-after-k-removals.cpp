class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
         
            map<int,int> mp;
            for(int i=0;i<arr.size();i++ )
                mp[arr[i]]++;
            
            priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
            
            for(auto x:mp)
                pq.push({x.second,x.first});   //  remove the numbers with the smallest count first. 
            while(!pq.empty() and k>0)
            {
                int val=pq.top().first;
                if(val<=k)
                    pq.pop();
                k-=val;
            }
            return pq.size();
    }
};