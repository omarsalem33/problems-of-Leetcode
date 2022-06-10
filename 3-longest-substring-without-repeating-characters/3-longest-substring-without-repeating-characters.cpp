class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
            int cur = 0, start = 0 , max_length = 0;
            map < char , int > unique;
            for( ; cur < s.length() ; cur++){
                    unique[s[cur]] ++;
                    if(unique[ s[ cur ] ] > 1)
                            while(unique[ s[ cur ] ] > 1)
                                    unique[ s[ start++ ] ] -- ;
                    int ans = cur - start + 1;
                    max_length = max (ans , max_length);
            }
            return max_length;
    }
};


