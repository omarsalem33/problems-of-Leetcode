public class Solution {
    public bool Check(int[] nums) {
      
            int count = 0;
            for(int i = 0; i < nums.Length-1; i++)
            {
                if (nums[i] > nums[i + 1])
                    count++;
            }
            if (nums[nums.Length - 1] > nums[0])
                count++;

            return count <= 1;
    }
}