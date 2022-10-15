class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0 ;
        for(auto &i : nums)
            ans += (int) log10(i) & 1;
        return ans ;
    }
};