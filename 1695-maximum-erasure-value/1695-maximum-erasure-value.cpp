class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
            unordered_map<int, int>m;
            int sum = 0, i = 0, j = 0, Max = 0;
            while(j < nums.size()){
                    sum += nums[j];
                    m[nums[j]] ++;
                    if(m[nums[j]] > 1){
                            while(m[nums[j]] != 1){
                                    m[nums[i]]--;
                                    sum -= nums[i];
                                    i++;
                            }
                    }
                    j++;
                    Max = max(Max, sum);
            }
            return Max;
    }
};