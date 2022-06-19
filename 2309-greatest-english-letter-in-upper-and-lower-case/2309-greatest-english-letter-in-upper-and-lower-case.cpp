class Solution {
public:
    string greatestLetter(string s) {
            map  < char , int > mp;

            for(int i =0 ; i < s.size() ; i++)
                    mp[s[i]]++;
            sort(s.begin() , s.end());
            string ans= "";
            for(int i= 0 ; i < s.size() ; i++){
                    char u = toupper(s[i]) , l = tolower(s[i]);
                    if(mp[u] and mp[l])
                            ans = u;
            }
            return ans;
    }
};