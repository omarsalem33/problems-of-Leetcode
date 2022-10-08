class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int Min = INT_MAX  ,ans , sum ; 
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size(); i++){
            int l = i + 1 , r = nums.size()- 1;
            while(l < r){
                sum = nums[i] + nums[l] + nums[r] ;
                if(abs(target - sum) < Min){
                    ans = sum ;
                    Min = abs(target - sum);
                }
                if(sum > target)
                    r--;
                else
                    l++;
            }
        }
     return ans ;   
    }
};