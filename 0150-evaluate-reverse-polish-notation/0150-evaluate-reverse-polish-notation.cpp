class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       string back = tokens.back();
       tokens.pop_back();
       if(back != "+" and back != "/" and back != "-" and back != "*")
            return stoi(back);
        else
        {
            long long y = evalRPN(tokens);
            long long x = evalRPN(tokens);
            if(back == "+")
                return x + y;
            else if (back == "-")
                return x - y;
            else if (back == "*")
                return x*y;
            else 
                return x / y; 
        }
    }
};