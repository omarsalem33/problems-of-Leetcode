public class Solution {
    public string MergeAlternately(string word1, string word2) {
        int m = word1.Length ;
        int n = word2.Length ;
        int l1 = 0 , l2 = 0;
        string ans = "";
        while(l1 < n || l2 < m)
        {
            ans+=word1[l1];
            l1++;
            ans+=word2[l2];
            l2++;
            if(l1 >= word1.Length && l2 < word2.Length){
                for(int i = l1 ; i < word2.Length; i++){
                    ans += word2[i];
                }
            break;
            }
            if(l2 >= word2.Length && l1 < word1.Length){
                for(int i = l2 ; i < word1.Length; i++){
                    ans += word1[i];
                }
            break;
            }
        }

    return ans ;
    }
}