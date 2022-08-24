class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0)
            return false;
        while(true){
            if(n == 1 or n == 3)
                return true;
            else if(n % 3 != 0)
                return false;
            n/=3;
        }
    }
};