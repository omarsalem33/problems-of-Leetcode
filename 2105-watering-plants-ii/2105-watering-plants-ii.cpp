class Solution {
public:
    int minimumRefill(vector<int>& plants, int a, int b) {
        int ans = 0, l = 0,r = plants.size() - 1;
        int sum1 = 0,sum2 = 0;
        
        while(l <= r)
        {
            if(l == r)
            {
                if(sum1 + plants[l] <= a or sum2 + plants[r] <= b)
                        return ans;
                return ans + 1;
            }
            if(sum1 + plants[l] > a)
            {
                ans++;
                sum1 = 0;
                
            }
            if(sum2 + plants[r] > b)
            {
                ans++;
                sum2 = 0;
            }
            sum1 += plants[l++];
            sum2 += plants[r--];
        }
   
        return ans;
    }
};