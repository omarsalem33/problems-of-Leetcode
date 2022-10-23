class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector < int > ans ;
        map < int , int > freq;
        for(auto &i : nums) freq[i]++;
        for(auto &i : freq)
            if(i.second > 1)
                ans.push_back(i.first);

        sort(nums.begin(), nums.end());
        int cnt = 1;
        while(cnt <= nums.size())
        {
            if(!binary_search(nums.begin() , nums.end() , cnt))
                ans.push_back(cnt);
            cnt++;
        }
        return ans ;
    }
};