public class Solution {
    public int TupleSameProduct(int[] nums) {
        int n = nums.Length , res = 0;
        Dictionary<int , int > productFreq = new Dictionary < int , int > ();
        for(int i = 0 ; i < n -1 ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                int product = nums[i] * nums[j];

                if (!productFreq.TryGetValue(product , out var value ))
                    productFreq.Add(product ,  1);
                else{
                    res += value++;
                    productFreq[product] = value;
                }
            }
        }
        return res * 8;
    }
}