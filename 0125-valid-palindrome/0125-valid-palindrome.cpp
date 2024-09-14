class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0 or s.size() == 1)
            return true;

        string ans = "";
        for (auto& c : s) {
            c = tolower(c);
            if (isalpha(c) || isdigit(c))
                ans.push_back(c);
        }
        int l = 0, r = ans.size() - 1;
        while (l <= r) {
            if (ans[l] == ans[r])
                l++, r--;
            else
                return false;
        }
        return true;
    }
};