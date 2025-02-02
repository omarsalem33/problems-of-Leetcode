public class Solution {
    public bool Check(int[] nums) {
        int[] sortedNums = nums.OrderByDescending(n => n).ToArray();
        Array.Reverse(sortedNums);
        if (nums.SequenceEqual(sortedNums))
            return true;
        else
        {
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
}