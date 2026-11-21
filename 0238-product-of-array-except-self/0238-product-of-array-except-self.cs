public class Solution {
    public int[] ProductExceptSelf(int[] nums) {
        int pre=1 , suf=1;
        int [] ans = new int [nums.Length];
        for(int i = 0 ; i < nums.Length ; i++){
            ans[i] = 1;
            ans[i] *= pre;
            pre *=  nums[i];
        }

        for(int i = nums.Length - 1 ; i >= 0 ; i--){
            ans[i] *= suf;
            suf *= nums[i];
        }

        return ans ;

    }
}


