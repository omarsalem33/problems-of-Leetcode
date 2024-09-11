class Solution {
public:
    string reverseWords(string s) {
        string temp = "", ans = "";
        stack<string> words;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                continue;
            } else if (s[i] != ' ' && s[i + 1] != ' ') {
                temp += s[i];
            } else if (s[i] != ' ' && s[i + 1] == ' ') {
                temp += s[i];
                words.push(temp);
                temp = "";
            }

            // Check if the loop has reached the end and push the last word
            if (i == s.size() - 1 && temp != "") {
                words.push(temp);
            }
        }

        // Remove leading and trailing spaces
        while (!words.empty() && words.top() == "") {
            words.pop();
        }
        while (!words.empty() && words.top().back() == ' ') {
            words.top().pop_back();
        }

        // Build the reversed string
        while (!words.empty()) {
            ans += words.top() + ' ';
            words.pop();
        }

        // Remove trailing space
        if (!ans.empty()) {
            ans.pop_back();
        }

        return ans;
    }
};
