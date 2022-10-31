class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
       sort(ages.begin(),ages.end());
        int ans =0;
        for(int i=0;i<ages.size();i++)
        {
             int val = ages[i] / 2 + 7;
            if(ages[i] <=val) //invalid condition
                continue;
            
            int idx1 = upper_bound(ages.begin(),ages.end(),val)-ages.begin();
            int idx2 = upper_bound(ages.begin(),ages.end(),ages[i])-ages.begin();
            
            idx2--;     
            if(idx2 >= idx1)    
                ans += idx2-idx1;
            
         }
        
        return ans;
    }
};