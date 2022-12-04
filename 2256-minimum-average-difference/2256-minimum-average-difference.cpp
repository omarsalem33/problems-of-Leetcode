class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long Total_Sum = 0;
        vector < long long > prefix(nums.size());
        for(int i = 0 ; i < nums.size() ; i ++)
        {
          Total_Sum +=nums[i];
          prefix[i] = Total_Sum;
        }
        int Min = INT_MAX , AnsIndx = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
          int Divide = i+1;
          int Right = prefix[i] / Divide;
          int Left = 0;
          if(nums.size() - Divide != 0)
            Left = (Total_Sum - prefix[i]) / (nums.size() - Divide);
          int tmp = abs(Left - Right);
          if(tmp < Min)
          {
            Min = tmp;
            AnsIndx = i; 
          }   
        }
        return AnsIndx;
    }
};