public class Solution {
    public int MaxOperations(int[] nums, int k) {
        nums.Sort();
        int left = 0, right = nums.Length - 1, count = 0;
        while (left < right)
        {
            if (nums[left] + nums[right] == k)
            {
                count++;
                left++;
                right--;
            }
            else if (nums[left] +nums[right] > k)
                right--;
            else
                left++;
        }
        return count;
    }
}