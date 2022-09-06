class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int Max = INT_MIN , cnt = 0 ;
            for(int i = 0 ; i < nums.size() ; i++)
            {
                   cnt += nums[i] ;                    
                   Max = max(Max, cnt);
                   if(cnt < 0)
                           cnt = 0;
            }

            return Max ;
    }

};