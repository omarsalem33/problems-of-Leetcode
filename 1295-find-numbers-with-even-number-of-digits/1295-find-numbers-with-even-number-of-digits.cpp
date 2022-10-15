class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector < string > ans ;
        for(auto &i : nums)
        {
            string s = to_string(i);
            ans.push_back(s);
        }
        int cnt = 0;
        for(auto &i:ans)
            if(i.size() % 2 == 0)
                cnt ++;
        return cnt ;
    }
};