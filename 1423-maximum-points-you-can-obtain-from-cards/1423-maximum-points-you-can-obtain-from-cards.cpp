class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        
        int n = a.size(), sum = a[0];
        int pre[n], re[n];
        pre[0] = a[0];
        for(int i = 1; i < n; i++){
            pre[i] = a[i] + pre[i-1];
            sum += a[i];
        }
        if(k == n)   
                return sum;
        int ans = 0;
        for(int i = 0; i < k; i++){
            int temp = sum - pre[n - k + i] + pre[i];
            ans = max(ans, temp);
        }
        ans = max(ans, sum - pre[n - k - 1]);
        ans = max(ans, pre[k - 1]);
        return ans;
    }
};