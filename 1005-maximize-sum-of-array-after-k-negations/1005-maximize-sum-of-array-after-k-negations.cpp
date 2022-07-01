class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int neg = 0;
        for(int i = 0;i < n;i++)
            if(nums[i] <= 0)
                neg++;
            
        
        // -2 -1 -1 0 2 3 4 k= 2/3
        if(neg >= k)
            for(int i = 0;i < k; i++)
                nums[i] = -nums[i];
        
        
        // -2 -1 -1 0 2 3 4 k= 5
        if(neg < k){
            for(int i=0;i<neg;i++){
                nums[i] = -nums[i];
            }
            k -= neg;
            sort(nums.begin(),nums.end());
            // 2 1 1 0 2 3 4 k = 1
            // 0 1 1 2 2 3 4 k = 1
            while(k > 0){
                nums[0] = -nums[0];
                k--;
            }
        }
            
        int sum = 0;
        for(int &x : nums){
            sum += x;
        }
        return sum;
    }
};