public class Solution {
    public bool IsAnagram(string s, string t) {
         char[] arrayS = s.ToCharArray();
        char[] arrayt = t.ToCharArray();
        Array.Sort(arrayS);
        Array.Sort(arrayt); 
        
        return arrayS.SequenceEqual(arrayt);
    }
}