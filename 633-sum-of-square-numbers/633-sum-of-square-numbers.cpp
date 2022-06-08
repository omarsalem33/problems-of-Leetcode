class Solution {
public:
  
        int mySqrt(int n){
                long long num = n,l = 0,h = n;
                while(l <= h){
                        long  mid = l + ( h - l ) / 2;
                        if((mid * mid) > num)
                                h = mid - 1;
                        else if(( mid * mid ) < num)
                                l = mid + 1;
                        else
                                return mid;
                }
                return l;
        }// check if number have a sqrt or no
bool judgeSquareSum(int c) {
        
        int s =mySqrt(c);
        if(c<=1) return 1;
        if(s==c) return 1;
        long long  l = 0,h = s;
        while(l <= h){
            if(l * l + h * h>c)
                h--;
            
            else if(l * l + h * h<c)
                l++;
            else 
                    return true;
        }
        return 0;
}
    
            
};