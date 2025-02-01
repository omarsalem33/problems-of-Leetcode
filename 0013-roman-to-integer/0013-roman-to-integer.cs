public class Solution {
    public int RomanToInt(string s) {
        Dictionary< char, int > RomanValues = new Dictionary < char , int > ();
        RomanValues.Add('I' , 1);
        RomanValues.Add('V' , 5);
        RomanValues.Add('X' , 10);
        RomanValues.Add('L' , 50);
        RomanValues.Add('C' , 100);
        RomanValues.Add('D' , 500);
        RomanValues.Add('M' , 1000);

        int ans = 0; 
        for(int i =0; i < s.Length ; i ++)
        {
            if( i < s.Length -1 && RomanValues[s[i]] < RomanValues[s[i+1]])
                ans -= RomanValues[s[i]];
            else 
                ans += RomanValues[s[i]];
        }
        return ans ;
    }
}