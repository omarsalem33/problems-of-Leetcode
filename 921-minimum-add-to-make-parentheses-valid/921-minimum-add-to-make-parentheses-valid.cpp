class Solution {
public:
    int minAddToMakeValid(string s) {

            int ans = 0, stack = 0;
            for (auto i : s){
                    if (i == '(') 
                            stack++;
                    if (i == ')')
                    {
                            if (stack > 0)
                                    stack--;
                            else 
                                    ans++;
                    }
            }
            ans += stack;
            return ans;
    }
    
};