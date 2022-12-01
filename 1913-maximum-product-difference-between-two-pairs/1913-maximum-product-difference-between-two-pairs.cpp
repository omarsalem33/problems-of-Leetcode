class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int a = nums[nums.size() - 1] , b = nums[nums.size() - 2] , x = nums[0], y = nums[1];
        return (a*b) - (x*y);
    }
};