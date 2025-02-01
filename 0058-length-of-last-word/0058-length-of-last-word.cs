public class Solution {
    public int LengthOfLastWord(string s) {
        int ans =0;
        for (int i = s.Length -1 ; i >= 0 ; i--){
            if(s[i] == ' ' && ans != 0)
                 break;
            else if(s[i] != ' ') 
                ans ++;
        }
        return ans ;
    }
}