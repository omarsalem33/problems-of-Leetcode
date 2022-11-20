class Solution {
public:
    int calculate(string s) {
        if(s.empty())
            return 0;
        int el = 0 , i = 0 , cnt = 0;
        char op = '+';
        while(i < s.size())
        {
            if(s[i] == ' ' or (s[i] == ')' and cnt == 0))
                i++;
            else if(s[i] == '+')
                op = '+' , i++;
            else if (s[i] == '-')
                op = '-' ,i++;
            else if (s[i] == '(')
            {
                int j = i + 1;
                cnt ++ , i++;
                while (cnt != 0  and i < s.size())
                {
                    if(s[i] == '(')
                        cnt ++;
                    else if (s[i] == ')')
                        cnt --;
                    i ++;
                }
                string tmp = s.substr(j , i - j - 1);
                int ans  = calculate(tmp);
                (op == '-' ?el -= ans : el += ans);
                 op = '#';
            }
            else
            {
                string dig = "";
                while (i < s.size() and isdigit(s[i]))
                {
                    dig = dig + s[i];
                    i++;
                } 
                    if(op == '-')
                        el -= stoi(dig);
                    else if (op == '+')
                        el += stoi(dig);
                    op = '#';
            }
        }
         return el;
    }
};




           