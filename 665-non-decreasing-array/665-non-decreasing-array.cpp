class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
            int cnt = 0;             
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                if(++cnt > 1) 
                        return false;
                if(i == 1 or nums[i-2] <= nums[i])
                        nums[i-1] = nums[i];    
                else
                        nums[i] = nums[i-1];
            }
        }
        return true;
    } 

};

// 3 4 2 3
// 4 4 2 3   -> cnt = 1
// 4 4 4 3   -> cnt = 2 return false