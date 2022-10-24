class Solution {
public:
    int ans = 0;
    bool isUnique(string s) {
        vector < int > v(26 , 0);
        for(int i = 0 ; i < s.size() ; i++) {
            if(v[s[i] - 'a'] == 1)
                return false;
            v[s[i] - 'a'] ++;
        }
        return true;
    }
    
    void solve(vector < string > & arr , int idx = 0 , string cur_s= "") {
        if(! isUnique(cur_s))
            return ;
        int tmp = cur_s.size();
        ans = max (ans , tmp);
        if(idx >= arr.size())
            return ;
        solve(arr, idx + 1 ,cur_s + arr[idx]);
        solve(arr, idx + 1 ,cur_s );
    }    
    int maxLength(vector<string>& arr) {
       solve(arr);
        return ans ;
    }
};