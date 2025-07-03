class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int n = num1.size()-1;
        int m = num2.size()-1;
        string ans = "";
        int carry = 0;

        while(n >= 0 or m >= 0 or carry)
        {
            int x = 0 , y = 0;

            if(n >= 0)
            {
                x = num1[n] - '0';
                n--;
            }

            if(m >= 0)
            {
                y = num2[m] - '0';
                m--;
            }

            int sum = x + y + carry;
            carry = sum / 10;
            ans.push_back( (sum % 10) + '0');
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }
};