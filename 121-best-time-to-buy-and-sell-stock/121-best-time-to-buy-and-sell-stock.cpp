class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, minv=INT_MAX;
        for(int i=0; i< prices.size(); i++){
            minv=min(minv, prices[i]);
            ans=max(ans, prices[i]-minv);
        }
    return ans;
    }
};