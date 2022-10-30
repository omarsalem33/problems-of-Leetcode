class Solution {
public:
    int longestPalindrome(string s) {
        map < char , int > mp;
        for(char & i : s)
            mp[i]++;
        int ans = 0 ;
        bool flag = false;
        for(auto &i : mp)
            (i.second % 2 == 0 ? ans += i.second : (ans += i.second - 1 , flag = true));
            
        if(flag)
            ans += 1;
        return ans;
    }
};
