class comp{
    public:
    bool operator()(pair <int,int> p1,pair <int,int> p2){
        return p1.first + p1.second < p2.first + p2.second;
    }
};
class Solution {    
public:
 vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k){
        priority_queue <pair<int,int>,vector <pair<int,int>>,comp> pq;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum = nums1[i]+nums2[j];
                if(pq.size() < k)
                    pq.push({nums1[i],nums2[j]});
                else if(pq.top().first + pq.top().second > sum){
                    pq.push({nums1[i],nums2[j]});
                    pq.pop();
                }
                else
                    break;   
            }
        }
        vector <vector<int>> ans;
        vector <int> tmp;
        while(pq.size()){
            tmp.push_back(pq.top().first);
            tmp.push_back(pq.top().second);
            ans.push_back(tmp);
            pq.pop();
            tmp.clear();
        }
        return ans;
    }
};