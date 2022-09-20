class Solution {
public:
    int t[1001][1001]; 
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int ans = 0;
        for(int i = 0; i <= n; ++i){
            for(int j = 0; j <= m; ++j){
                if(i == 0 or j == 0)
                    t[i][j] = 0; 
                else{
                    if(nums1[i-1] == nums2[j-1])
                        t[i][j] = t[i-1][j-1]+1;                     
                    else
                        t[i][j] = 0;                    
                    ans = max(ans, t[i][j]); 
                }
            }
        }
        return ans;
    }
};