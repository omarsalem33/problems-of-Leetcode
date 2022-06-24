class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
            int pre = 0 , n = nums.size();
            map < int , int> mp;
           for(int i = 0 ; i < n ; i ++)
           {
                   pre += nums[i];
                   if(mp.find(pre % k) == mp.end())
                           mp[pre % k] = i;
                   if(pre % k == 0 and i >= 1 )
                           return true;
                   if( i - mp[pre % k] > 1)
                           return true;
                   
           }
            
           return false;
    }
};