class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
            int n = arr.size() ,sum = 0;
            vector<int> ans(n, 0);
            ans[0] = arr[0];
            for (int i = 1; i < n; i++)   
                ans[i] = ans[i - 1] + arr[i];
            for(auto &i : arr)    
                sum += i;
            
           for (int j = 2; j < n; j += 2)
                for (int i = 0; (i + j) < n; i++)
                    (i == 0 ? sum += ans[j] :sum += ans[i + j] - ans[i - 1]);
    
            return sum;
    }
};