class Solution {
public:
    bool isPalindrome(int x) {
         if(x < 0) 
             return false;
        unsigned long long t = x, reverse = 0;
        
        while(t){
            reverse = reverse*10 + (t % 10);
            t /= 10;
        }
        if(reverse == x) return true;
        else return false;
    }
};