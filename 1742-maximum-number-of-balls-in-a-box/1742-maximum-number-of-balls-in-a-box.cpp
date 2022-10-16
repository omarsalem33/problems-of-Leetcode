class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector < int > ans(100, 0);
        for(int i = lowLimit ; i <= highLimit ; i++)
        {
            int sum = 0 , temp = i;
            while(temp)
            {
                sum += temp % 10;
                temp /= 10;
            }
            ans[sum]++;
        }
        return *max_element(ans.begin() , ans.end());
    }
};
