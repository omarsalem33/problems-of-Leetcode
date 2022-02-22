class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size(), l = 0, r = 0; 
        vector<int>count(26,0), curCount(26,0), res; 
        for(auto &i:p) count[i-'a']++; 
        while(r < n){
            curCount[s[r]-'a']++; 
            if((r-l) >= m) curCount[s[l++]-'a']--; 
            if(count==curCount) res.push_back(l);
            r++; 
        }
        return res; 
    }
};
