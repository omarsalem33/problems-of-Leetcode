class Solution {
public:
    string replaceDigits(string s) {
        
            string t = ""; 
            for(int i =0 ; i < s.size() ; i ++)
                   if(isalpha(s[i])){
                           t += s[i];
                           int a = s[i + 1] - '0';
                           if(a >= 0)
                                   t += char(s[i] + a);
                   }
                    

            return t;
    }
};
