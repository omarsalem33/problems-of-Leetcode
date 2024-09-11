class Solution {
public:
    int jump(vector<int>& nums) {
       int ans = 0; 
       int MaxPoint = 0 , EndPoint = 0;
       for(int i = 0 ; i < nums.size() - 1; i++)
       {
           MaxPoint = max(MaxPoint  ,i + nums[i]);
           if(i == EndPoint)
           {
               ans++;
               EndPoint = MaxPoint;
           }
       }
       return ans;
    }
};