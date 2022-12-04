class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
      long long Total_Sum = 0 ;
      vector < long long > prefix(nums.size());
      for(int i=0 ; i < nums.size() ; i++)
      {
        Total_Sum += nums[i];
        prefix[i] += Total_Sum;
      }
      int MinVal = INT_MAX , AnsIdx = 0;
      for(int i = 0 ; i < nums.size() ;i++)
      {
        int div = i+1;
        int right = prefix[i] / div;
        int left =  0 ;
        if(nums.size() - div != 0)
          left = (Total_Sum - prefix[i]) / (nums.size() - div);
        int temp = abs(left - right);
        if(temp < MinVal)
        {
          MinVal = temp;
          AnsIdx = i;
        }
      }
    return AnsIdx;
    }
};