class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() <= 1)
            return true;
        string ans = "";
        for(auto &i : s){
            i = tolower(i);
            if(isalpha(i) or isdigit(i))
                ans.push_back(i);
            }
        int l = 0 , r =ans.size()-1;
        while(l <= r){
            if(ans[l] == ans[r])
                l++, r--;
            else
                return false ;
        }
        
        return true;
        
    }
    
};