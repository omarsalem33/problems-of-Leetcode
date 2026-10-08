public class Solution {
    public int MaxVowels(string s, int k) {
       
        List<char> bag = new List<char>(){ 'a', 'e', 'i', 'o', 'u' };
        int count = 0;
        int max = 0;
        for (int i = 0; i < s.Length; i++)
        {
           if (bag.Contains(s[i]))
               count++;
           if (i - k >= 0)
           {
               if (bag.Contains(s[i - k]))
                   count--;
           }
           max = Math.Max(max, count);
        }
        return max;
    }
}