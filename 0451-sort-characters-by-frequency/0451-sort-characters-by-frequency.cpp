bool cmp(pair<char, int>& a,pair<char, int>& b)
{
    if(a.second==b.second)
        return a.first > b.first;
    return a.second > b.second;
}
class Solution {
public:
    
    string frequencySort(string s) {
        map<char,int> f;
        for(auto &c:s)   f[c]++;
        
        string ans;
        vector<pair<char, int> > A;
        
        for (auto& it : f) 
            A.push_back(it);

        sort(A.begin(), A.end(), cmp);
        for(auto &x:A)
            for(int i=0;i<x.second;i++)
                ans+=x.first;

          return ans;
        }
};