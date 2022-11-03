class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int len=0;
        bool middle=false;
        unordered_map<string, int> M;

        for (auto& word : words) 
            M[word]++;
    
        for (auto& [s, freq]: M) {
            string rev = s;
            reverse(rev.begin(), rev.end());
            
            if(s == rev) {
                if(freq%2 == 0)
                    len += freq;
                else {
                    len += freq-1;
                    middle = true;
                }
            } 
            else if(M.count(rev))
                len += min(freq, M[rev]);
        }
        return 2 * (len + middle);
    }
};