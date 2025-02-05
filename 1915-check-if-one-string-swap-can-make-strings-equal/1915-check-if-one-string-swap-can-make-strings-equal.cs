public class Solution {
    public bool AreAlmostEqual(string s1, string s2) {
        int diff1 = 0;
        int diff2 = 0;
        int diffCount = 0;
        for(int i = 0; i < s1.Length; i++)
        {
            if(s1[i] != s2[i])
            {
                diffCount++;
                if(diffCount > 2)
                {
                    return false;
                }
                else if(diffCount == 1)
                {
                    diff1 = i;
                }
                else
                {
                    diff2 = i;
                }
            }
        }
        if(s1[diff1] == s2[diff2] && s1[diff2] == s2[diff1])
        {
            return true;
        }
        return false;
    }
}