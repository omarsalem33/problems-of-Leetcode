class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       map<int,int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(ans.count(nums[i]) == 0){
                ans.insert({nums[i], i});
            } else{
                ans[nums[i]] = abs(ans[nums[i]] - i);
                if(ans[nums[i]]<=k)
                        return true;
            }
        }
        return false;
    }
};