class Solution {
public:
    bool check(vector < int >& freq_s, vector < int >& freq_t){
        for(int i = 0; i < 256; i++)
            if(freq_t[i] > freq_s[i]) 
                return false;
        return true;
    }
    
    string minWindow(string& s, string& t) {
        vector < int > freq_s(256), freq_t(256);
        for(auto& c : t)
            freq_t[c - 'A']++;
       
        int l = 0, r = 0, n = s.size(), Min = INT_MAX;
        string window;
        while(l < n){
            while(r < n && !check(freq_s, freq_t)) 
                freq_s[s[r] - 'A']++, r++;
            if(Min > r - l && check(freq_s, freq_t))
            {
                Min = r - l;
                window.clear();
                for(int i = l; i < r; i++)
                    window += s[i];
            }
            freq_s[s[l] - 'A']--, l++;
        }
        return window;
        
    }
};

