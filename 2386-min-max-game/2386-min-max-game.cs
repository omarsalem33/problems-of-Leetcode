public class Solution {
    public int MinMaxGame(int[] nums) {
        while (nums.Length > 1)
        {
            int[] newNums = new int [nums.Length / 2];
            for(int i = 0 ; i < nums.Length / 2 ; i++){
                if(i % 2 == 0){
                    newNums[i] = Math.Min(nums[2*i] , nums[2*i +1]);
                } 
                else{
                    newNums[i] = Math.Max(nums[2*i] , nums[2*i +1]);
                }
            }
            nums = newNums;
        }
    return nums[0];
    }
}