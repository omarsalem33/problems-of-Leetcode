class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(),nums.end(),0), n = nums.size(), output = INT_MAX;
        int left = 0, right = 0, current_total = 0;
        while (right < n){
            current_total += nums[right];
            while (current_total > total - x and left <= right){
                current_total -= nums[left];
                left += 1;
            }
            if (current_total == total - x){
                output = min(n - (right-left+1), output);
            }
            right++;
        }

            
        if (output == INT_MAX)
            return -1;
        else
            return output;
    }
};