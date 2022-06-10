class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        int one_behind = 0, one_ahead = 1; 
        while (one_ahead < nums.size()) {
                //1 1 2 -> 1=1 -> 1 != 2 , nums[1] = 2
                if (nums[one_ahead] != nums[one_behind]) {
                nums[++one_behind] = nums[one_ahead];
            }
            ++one_ahead;
        }
        
        return (one_behind + 1);
    }
};