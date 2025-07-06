class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        int n = queries.size();

        for (int i = 0; i < n; i++) {
            string temp = queries[i];
            int index = 0;
            bool flag = true;
            for (int j = 0; j < temp.size(); j++) {
                if (isupper(temp[j]) && isupper(pattern[index]) &&
                    temp[j] == pattern[index])
                    index++;
                else if (temp[j] == pattern[index])
                    index++;
                else if (isupper(temp[j]) && isupper(pattern[index]) &&
                         temp[j] != pattern[index]) {
                    flag = false;
                    break;
                } else if (index >= pattern.size() && isupper(temp[j])) {
                    flag = false;
                    break;
                }
            }
            if (index < pattern.size())
                flag = false;

            ans.push_back(flag);
        }

        return ans;
    }
};