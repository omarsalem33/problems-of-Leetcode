class Solution {
public:
  vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans;
    int low = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    int high = upper_bound(nums.begin(),nums.end(),target) - nums.begin() - 1;
    if (low != (int)nums.size() and high != (int)nums.size() and nums[low] == target and nums[high] == target){
     ans.emplace_back(low);
     ans.emplace_back(high);
    } else{
        ans.emplace_back(-1);
        ans.emplace_back(-1);
    }
    return ans;
}
};
