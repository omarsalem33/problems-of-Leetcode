public class Solution {
    public int[] PlusOne(int[] digits) {
        int n =  digits.Length;
        digits[n-1] += 1;

        for(int i = n-1; i >  0 ; i--){
            
            if(digits[i] > 9){
                digits[i] %=  10;
                digits[i - 1] += 1;
            }
        }

        if(digits[0] > 9)
        {
            digits[0] %=10;
           int [] newdigits = new int [n+1];
           newdigits[0] = 1;
           for(int i = 0 ; i< n ; i ++){
                newdigits[i+1] = digits[i];
           }
           return newdigits;
        }
    
    return digits;

    }
}