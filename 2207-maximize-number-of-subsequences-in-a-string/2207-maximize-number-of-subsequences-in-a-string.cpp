class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        
//          p1 is overall pattern[0] count
//          p3 is overall pattern[1] count
//          p2 is pattern[1] count before next pattern[0] appears.
        long long p1 = 0,p2 = 0,sum = 0,p3 = 0;
        int n = text.length();
        bool flag = false;
        
        for(int i = 0; i < n; i++)
        {
            if(text[i] == pattern[0])
            {
                if(flag)
                {
                    sum += p2 * p1;
                    flag = false;
                }
                p1++;
                p2 = 0;
            }
            else if(text[i] == pattern[1])
            {
                p3++;
                p2++;
                flag = true;
            }
        }
        if(pattern[0] == pattern[1])
           return sum = (p1 *(p1 + 1))/2;

        if(flag)
            sum += p1*p2;
        sum += max(p1,p3);
        
        return sum;
        
    }
};
