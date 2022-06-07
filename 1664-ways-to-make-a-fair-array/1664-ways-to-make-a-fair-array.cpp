class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int even = 0,odd = 0;
        for(int i=0;i<nums.size();i++)
            (i%2==0 ? even += nums[i] : odd += nums[i]) ;
        int even1 = 0,odd1 = 0, ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(i % 2 == 0)
            {
               int k = even - even1 - nums[i];
                int j = odd - odd1;

                if(even1 + j == odd1 + k)
                    ans++;
            }
            else
            {
                int k = even - even1;
                int j = odd - odd1 - nums[i];
             
                if(even1 + j == odd1 + k)
                    ans++;
            }    
            (i % 2 == 0 ? even1 += nums[i] : odd1 += nums[i]) ;
        }
        return ans;
    }
    
};