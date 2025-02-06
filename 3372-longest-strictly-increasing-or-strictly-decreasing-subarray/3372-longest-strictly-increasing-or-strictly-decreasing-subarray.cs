public class Solution {
    public int LongestMonotonicSubarray(int[] nums) {
        int n = nums.Length  , resInc = 1 , resDec= 1;
        int inc = 1, dec = 1;
        for(int i = 1; i < n ; i++)
        {
            if(nums[i] > nums[i-1])
            {
                inc++;
                dec = 1;
            }
            else if( nums[i] < nums[i-1])
            {
                dec ++;
                inc = 1;
            }
            else 
            {
                dec= 1;
                inc=1;
            }
            resInc = inc> resInc? inc : resInc;
           resDec = dec> resDec? dec : resDec;

        }

        if(resInc > resDec)
            return resInc;
       
      return  resDec;
    }
}