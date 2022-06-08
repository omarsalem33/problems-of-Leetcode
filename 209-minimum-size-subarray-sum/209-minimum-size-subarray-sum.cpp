class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int l = 0 , r = 0 , ans = INT_MAX , cur = 0;
            while(r < nums.size()){
                    cur += nums[r++];
                    while(cur >= target){
                            ans = min(ans,(r - l));
                            cur -= nums[l++];
                    }
            }
             return (ans != INT_MAX) ? ans : 0;
    }
};
