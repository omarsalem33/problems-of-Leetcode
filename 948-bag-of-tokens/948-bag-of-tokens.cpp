class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort (tokens.begin() , tokens.end());
        int l = 0 , h = tokens.size() - 1 ;
        int points  = 0 , ans = 0;
        while(l <= h and (tokens[l] < power or points > 0 ))
        {
            while(l <= h and power >= tokens[l])
            {
                power -= tokens[l++];
                points ++;
            }
            ans = max(ans, points);
            if (l <= h and points > 0)
            {
                power += tokens[h--];
                points--;
            }
        }
        return ans;
        
    }
};