class Solution {
public:
    string sortSentence(string s) {
            int i = 0 ;
            int a = count (s.begin() , s.end() , ' ');
            vector < string > v(a + 1);
            while (i < s.size())
            {   
                    string s1 = "";
                    while(!isdigit(s[i]))
                    {
                            s1 += s[i];
                            i++;
                    }
                    
                    int c = s[i] - '0';
                    i += 2;
                    v[c - 1] = s1;
                    
            }
            s = "";
            for(int i = 0 ; i < a ; i++)
            {
                s += v[i] + " ";        
            }
            s += v [a];
            return s;
    }
};
