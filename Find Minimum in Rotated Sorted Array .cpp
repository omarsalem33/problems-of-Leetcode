class Solution {
public:
    int findMin(vector<int>& nums)  {
        int lo = 0, hi = nums.size()-1;
        while (lo < hi) {
            int mid = lo + (hi-lo)/2;
            (nums[mid] < nums[hi] ? hi = mid : lo = mid+1) ;
           }
        
        return nums[lo];
    }
};
