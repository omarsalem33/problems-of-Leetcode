class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int balance = 0 , start = 0;
        for (int i = 0 ; i < s.size() ;i++){
            (s[i] == '(' ?  balance ++ :  balance --);

            if(balance == 0)
                {
                    ans += s.substr (start + 1 , i -start - 1);
                    start= i+1;
                }
        }
        return ans;

    }
};