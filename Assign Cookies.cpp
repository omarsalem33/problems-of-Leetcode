class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int chiled = 0 ,cookies = 0;
        while(chiled < g.size() and cookies < s.size()){
            if(g[chiled] <=  s[cookies])
                ++chiled;
            ++cookies;
            
        }
        return chiled;
    }
};
